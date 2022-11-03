#include "Dog.hpp"

//default constructor
Dog::Dog()
: Animal("Dog")
, type_("Dog")
{
	std::cout << SPRINGGREEN5 << "calling Dog default constructor" << RESET << std::endl;
}

// // constructor
// Dog::Dog()
// : type_("Dog")
// {
// 	std::cout << SPRINGGREEN5 << "calling Dog constructor" << RESET << std::endl;
// }

// copy constructor
Dog::Dog(Dog const& ori)
: Animal(ori)
{
	std::cout << SPRINGGREEN5 << "calling Dog copy constructor" << RESET << std::endl;
	this->type_ = ori.type_;
}

// destructor
Dog::~Dog()
{
	std::cout << SPRINGGREEN5 << "calling Dog destructor" << RESET << std::endl;
}

// OPERATOR OVERLOADS -----------------------------------------------------------------

// = overload
Dog&	Dog::operator=(Dog const& rhs)
{
	this->type_ = rhs.type_;
	return *this;
}

// << overload
std::ostream&	operator<<(std::ostream& o, Dog const& rhs)
{
	rhs.displayAttributes(o);
	return o;
}

// MEMBER FUNCTIONS ------------------------------------------------------------------

void	Dog::displayAttributes(std::ostream& o) const
{
	o << "Type = "
		<< type_
		<< std::endl;
}

// - GETTERS
std::string	Dog::getType() const
{
	return type_;
}
