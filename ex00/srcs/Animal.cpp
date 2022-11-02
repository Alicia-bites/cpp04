#include "Animal.hpp"

//default constructor
Animal::Animal()
: type_("none")
{
	std::cout << DEEPPINK1 << "calling Animal default constructor" << RESET << std::endl;
}

// constructor
Animal::Animal(std::string& type)
{
	std::cout << DEEPPINK1 << "calling Animal constructor" << RESET << std::endl;
}

// copy constructor
Animal::Animal(Animal const& ori)
{
	std::cout << DEEPPINK1 << "calling Animal copy constructor" << RESET << std::endl;
	this->type_ = ori.type_;
}

// destructor
Animal::~Animal()
{
	std::cout << DEEPPINK1 << "calling Animal destructor" << RESET << std::endl;
}

// OPERATOR OVERLOADS -----------------------------------------------------------------

// = overload
Animal&	Animal::operator=(Animal const& rhs)
{
	this->type_ = rhs.type_;
}

// << overload
std::ostream&	operator<<(std::ostream o, Cat const& rhs)
{
	rhs.displayAttributes(o);
	return o;
}

// MEMBER FUNCTIONS ------------------------------------------------------------------

void	Animal::makeSound() const
{
	if (this->getType() == "cat")
		std::cout << "meeeeeeeeeeeww..." << std::endl;
	else if (this->getType() == "dog")
		std::cout << "waf! waf!" << std::endl;
	else 
		std::cout << "..." << std::endl;
}

void	Animal::displayAttributes(std::ostream& o) const
{
	o << "Type = "
		<< type_;
		<< std::endl;
}

// - GETTERS
std::string	Animal::getType() const
{
	return type_;
}
