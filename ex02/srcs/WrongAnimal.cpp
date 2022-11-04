#include "WrongAnimal.hpp"

//default constructor
WrongAnimal::WrongAnimal()
: type_("none")
{
	std::cout << TURQUOISE2 << "calling WrongAnimal default constructor" << RESET << std::endl;
}

// constructor
WrongAnimal::WrongAnimal(std::string type)
: type_(type)
{
	std::cout << TURQUOISE2 << "calling WrongAnimal constructor" << RESET << std::endl;
}

// copy constructor
WrongAnimal::WrongAnimal(WrongAnimal const& ori)
{
	std::cout << TURQUOISE2 << "calling WrongAnimal copy constructor" << RESET << std::endl;
	this->type_ = ori.type_;
}

// destructor
WrongAnimal::~WrongAnimal()
{
	std::cout << TURQUOISE2 << "calling WrongAnimal destructor" << RESET << std::endl;
}

// OPERATOR OVERLOADS -----------------------------------------------------------------

// = overload
WrongAnimal&	WrongAnimal::operator=(WrongAnimal const& rhs)
{
	this->type_ = rhs.type_;
	return *this;
}

// << overload
std::ostream&	operator<<(std::ostream& o, WrongAnimal const& rhs)
{
	rhs.displayAttributes(o);
	return o;
}

// MEMBER FUNCTIONS ------------------------------------------------------------------

void	WrongAnimal::displayAttributes(std::ostream& o) const
{
	o << "Type = "
		<< type_
		<< std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "..." << std::endl;
}

// - GETTERS
std::string	WrongAnimal::getType() const
{
	return type_;
}
