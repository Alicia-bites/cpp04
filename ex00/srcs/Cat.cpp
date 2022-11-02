#include "Cat.hpp"

//default constructor
Cat::Cat()
: type_("Cat")
{
	std::cout << DODGERBLUE3 << "calling Cat default constructor" << RESET << std::endl;
}

// constructor
Cat::Cat(std::string& name)
: type_("Cat")
, name_(name)
{
	std::cout << DODGERBLUE3 << "calling Cat constructor" << RESET << std::endl;
}

// copy constructor
Cat::Cat(Cat const& ori)
{
	std::cout << DODGERBLUE3 << "calling Cat copy constructor" << RESET << std::endl;
	this->type_ = ori.type_;
}

// destructor
Cat::~Cat()
{
	std::cout << DODGERBLUE3 << "calling Cat destructor" << RESET << std::endl;
}

// OPERATOR OVERLOADS -----------------------------------------------------------------

// = overload
Cat&	Cat::operator=(Cat const& rhs)
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

void	Cat::displayAttributes(std::ostream& o) const
{
	o << "Type = "
		<< type_;
		<< std::endl;
}

// - GETTERS
std::string	Cat::getType() const
{
	return type_;
}