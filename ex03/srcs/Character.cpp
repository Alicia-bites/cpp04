#include "Character.hpp"

// Default constructor
Character::Character(std::string name)
: name_(name)
{
	std::cout << SPRINGGREEN5 << "Calling Character default constructor" << RESET << std::endl;
	for(int i = 0; i < 4; i++)
		inventory_[i] = 0;
}

// Copy constructor
Character::Character(Character const& ori)
: name_(ori.name_ + "--copied")
{
	std::cout << SPRINGGREEN5 << "Calling Character copy constructor" << RESET << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (ori.inventory_[i])
			inventory_[i] = ori.inventory_[i]->clone();
		else
			inventory_[i] = 0;
	}

}

// Destructor
Character::~Character()
{
	std::cout << SPRINGGREEN5 << "Calling Character destructor" << RESET << std::endl;
	for (int i = 0; i < 4; i++)
		if (inventory_[i])
			delete inventory_[i];
}

// assignement operator (destroy & replace elt in inventory)
Character & Character::operator=(Character const& rhs)
{
	std::cout << SPRINGGREEN5 << "Calling Character assignement operator"
		<< RESET << std::endl;
	std::cout << SPRINGGREEN5 << "Assigning " << rhs.name_ 
		<< " to " << name_ << std::endl; 
	for(int i = 0; i < 4; i++)
	{
		if (inventory_[i])
			delete inventory_[i];
		if (rhs.inventory_[i])
			inventory_[i] = (rhs.inventory_[i])->clone();
	}
	return (*this);
}

// MEMBER FUNCTIONS ----------------------------------------------------------------

// Search the inventory for a skill to use and use it on
// requested target. If no skill found, do nothing.
void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3 || inventory_[idx] == 0)
	{
		std::cout << "Nothing found to use at index " << idx
			<< std::endl;
		return ;
	}
	std::cout << getName();
	(inventory_[idx])->use(target);
}

void Character::equip(AMateria* m)
{
	if (!m)
	{
		std::cout << "FAILURE! Nothing to equip for "
			<< name_ << std::endl;
		return ;
	}
	int i = 0;
	while (inventory_[i] != 0 && i < 4)
		i++;
	if (i > 3)
	{
		std::cout << "FAILURE! " << name_
			<< "'s inventory is full. Inventory only have 4 spaces."
			<< std::endl;
		return ;
	}
	(inventory_)[i] = m;
	std::cout << "SUCCESS! " << name_ << " equipped materia of type "
		<< m->getType() << " at index " << i << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		std::cout << "Index " << idx
			<< " doesn't exists in inventory. Try a number between 0 and 3."
			<< std::endl; 
	else if (inventory_[idx] == 0)
		std::cout << "Nothing in " << name_ << "'s inventory at index "
			<< idx << " Can't unequip." << std::endl;
	else
	{
		AMateria *tmp = inventory_[idx];
		inventory_[idx] = 0;
		std::cout << " Dropping " << name_ << "'s " << tmp->getType()
			<< " at index " << idx << " on the floor" << std::endl;
	}
}

// -- GETTERS ----------------------------------------------------------------

std::string const& Character::getName() const
{
	return (name_);
}

// to copy Materia before it gets dropped on the floor in order to not loose
// its address and avoid leaks.
AMateria	*Character::getMateria(int i) const
{
	return inventory_[i];
}