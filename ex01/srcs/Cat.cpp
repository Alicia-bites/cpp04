#include "Cat.hpp"

//default constructor
Cat::Cat()
: Animal("Cat")
, brain_(new Brain())
{
	std::cout << PURPLE3 << "calling Cat default constructor" << RESET << std::endl;
}

// copy constructor
Cat::Cat(Cat const& ori)
: Animal(ori)
{
	std::cout << PURPLE3 << "calling Cat copy constructor" << RESET << std::endl;
	*this = ori;
}

// destructor
Cat::~Cat()
{
	std::cout << PURPLE3 << "calling Cat destructor" << RESET << std::endl;
	delete brain_;
}

// OPERATOR OVERLOADS -----------------------------------------------------------------

Cat&	Cat::operator=(Cat const& rhs)
{
	std::cout << PURPLE3 << "calling Cat assignement operator" << RESET << std::endl;
	type_ = rhs.type_;
	*brain_ = *(rhs.brain_);
	return *this;
}

Animal&	Cat::operator=(Animal const& rhs)
{
	std::cout << PURPLE3 << "calling Animal-Cat assignement operator" << RESET << std::endl;
	this->type_ = rhs.getType();
	*brain_ = *(rhs.getBrain());
	return *this;
}

// MEMBER FUNCTIONS ------------------------------------------------------------------

void	Cat::makeSound() const
{
	std::cout << "Meeeeoww" << std::endl;
}

Brain	*Cat::getBrain() const
{
	return brain_;
}
