#include "WrongCat.hpp"

//default constructor
WrongCat::WrongCat()
: WrongAnimal("WrongCat")
, type_("WrongCat")
{
	std::cout << PURPLE3 << "calling WrongCat default constructor" << RESET << std::endl;
}

// constructor
// WrongCat::WrongCat()
// : WrongAnimal()
// : type_("WrongCat")
// {
	// std::cout << PURPLE3 << "calling WrongCat constructor" << RESET << std::endl;
// }

// copy constructor
WrongCat::WrongCat(WrongCat const& ori)
: WrongAnimal(ori)
{
	std::cout << PURPLE3 << "calling WrongCat copy constructor" << RESET << std::endl;
	this->type_ = ori.type_;
}

// destructor
WrongCat::~WrongCat()
{
	std::cout << PURPLE3 << "calling WrongCat destructor" << RESET << std::endl;
}

// OPERATOR OVERLOADS -----------------------------------------------------------------

// = overload
WrongCat&	WrongCat::operator=(WrongCat const& rhs)
{
	this->type_ = rhs.type_;
	return *this;
}

// << overload
std::ostream&	operator<<(std::ostream& o, WrongCat const& rhs)
{
	rhs.displayAttributes(o);
	return o;
}

// MEMBER FUNCTIONS ------------------------------------------------------------------

void	WrongCat::displayAttributes(std::ostream& o) const
{
	o << "Type = "
		<< type_
		<< std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "Meeow... ahem, ahem : waf! waf!" << std::endl;
}

// - GETTERS
std::string	WrongCat::getType() const
{
	return type_;
}
