#include "Cat.hpp"

//default constructor
Cat::Cat()
: Animal("Cat")
, type_("Cat")
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
}

// OPERATOR OVERLOADS -----------------------------------------------------------------

// = overload
Cat&	Cat::operator=(Cat const& rhs)
{
	this->type_ = rhs.type_;
	return *this;
}

// << overload
std::ostream&	operator<<(std::ostream& o, Cat const& rhs)
{
	rhs.displayAttributes(o);
	return o;
}

// MEMBER FUNCTIONS ------------------------------------------------------------------

void	Cat::displayAttributes(std::ostream& o) const
{
	o << "Type = "
		<< type_
		<< std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Meeeeoww" << std::endl;
}

// - GETTERS
std::string	Cat::getType() const
{
	return type_;
}
