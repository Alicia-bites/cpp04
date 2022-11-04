#include "Animal.hpp"

//default constructor
Animal::Animal()
: type_("none")
{
	std::cout << TURQUOISE2 << "calling Animal default constructor" << RESET << std::endl;
}

// constructor
Animal::Animal(std::string type)
: type_(type)
{
	std::cout << TURQUOISE2 << "calling Animal constructor" << RESET << std::endl;
}

// copy constructor
Animal::Animal(Animal const& ori)
{
	std::cout << TURQUOISE2 << "calling Animal copy constructor" << RESET << std::endl;
	this->type_ = ori.type_;
}

// destructor
Animal::~Animal()
{
	std::cout << TURQUOISE2 << "calling Animal destructor" << RESET << std::endl;
}

// OPERATOR OVERLOADS -----------------------------------------------------------------

// = overload
Animal&	Animal::operator=(Animal const& rhs)
{
	this->type_ = rhs.type_;
	return *this;
}

// << overload
std::ostream&	operator<<(std::ostream& o, Animal const& rhs)
{
	rhs.displayAttributes(o);
	return o;
}

// MEMBER FUNCTIONS ------------------------------------------------------------------

void	Animal::makeSound() const
{
	std::cout << "..." << std::endl;
}

void	Animal::displayAttributes(std::ostream& o) const
{
	o << "Type = "
		<< type_
		<< std::endl
		<< "Brain = "
		<< getBrain()
		<< std::endl;
}

// - GETTERS
std::string	Animal::getType() const
{
	return type_;
}
