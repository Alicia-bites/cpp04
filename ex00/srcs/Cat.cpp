#include "Cat.hpp"

//default constructor
Cat::Cat()
: Animal("Cat")
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
	std::cout << PURPLE3 << "calling Cat assignement operator" << RESET << std::endl;
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

void	Cat::makeSound() const
{
	std::cout << "Meeeeoww" << std::endl;
}
