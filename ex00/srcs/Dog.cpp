#include "Dog.hpp"

//default constructor
Dog::Dog()
: Animal("Dog")
{
	std::cout << SPRINGGREEN5 << "calling Dog default constructor" << RESET << std::endl;
}

// copy constructor
Dog::Dog(Dog const& ori)
: Animal(ori)
{
	std::cout << SPRINGGREEN5 << "calling Dog copy constructor" << RESET << std::endl;
	*this = ori;
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

// MEMBER FUNCTIONS ------------------------------------------------------------------

void	Dog::makeSound() const
{
	std::cout << "Waf! Waf!" << std::endl;
}
