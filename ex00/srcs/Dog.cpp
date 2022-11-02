#include "Dog.hpp"

//default constructor
Dog::Dog()
: type_("Dog")
{
	std::cout << GREENYELLOW << "calling Dog default constructor" << RESET << std::endl;
}

// constructor
Dog::Dog(std::string& name)
: type_("Dog")
, name_(name)
{
	std::cout << GREENYELLOW << "calling Dog constructor" << RESET << std::endl;
}

// copy constructor
Dog::Dog(Dog const& ori)
{
	std::cout << GREENYELLOW << "calling Dog copy constructor" << RESET << std::endl;
	this->type_ = ori.type_;
}

// destructor
Dog::~Dog()
{
	std::cout << GREENYELLOW << "calling Dog destructor" << RESET << std::endl;
}

// OPERATOR OVERLOADS -----------------------------------------------------------------

// = overload
Dog&	Dog::operator=(Dog const& rhs)
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

void	Dog::displayAttributes(std::ostream& o) const
{
	o << "Type = "
		<< type_;
		<< std::endl;
}

// - GETTERS
std::string	Dog::getType() const
{
	return type_;
}
