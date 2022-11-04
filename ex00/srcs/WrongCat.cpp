#include "WrongCat.hpp"

//default constructor
WrongCat::WrongCat()
: WrongAnimal("WrongCat")
, type_("WrongCat")
{
	std::cout << LIGHTPINK1 << "calling WrongCat default constructor" << RESET << std::endl;
}

// copy constructor
WrongCat::WrongCat(WrongCat const& ori)
: WrongAnimal(ori)
{
	std::cout << LIGHTPINK1 << "calling WrongCat copy constructor" << RESET << std::endl;
}

// destructor
WrongCat::~WrongCat()
{
	std::cout << LIGHTPINK1 << "calling WrongCat destructor" << RESET << std::endl;
}

// OPERATOR OVERLOADS -----------------------------------------------------------------

// = overload
WrongCat&	WrongCat::operator=(WrongCat const& rhs)
{
	this->type_ = rhs.type_;
	return *this;
}

// MEMBER FUNCTIONS ------------------------------------------------------------------


void	WrongCat::makeSound() const
{
	std::cout << "Meeeeeeeeeeeeow" << std::endl;
}
