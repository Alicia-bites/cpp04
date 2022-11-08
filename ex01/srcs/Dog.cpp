#include "Dog.hpp"

//default constructor
Dog::Dog()
: Animal("Dog")
, brain_(new Brain())
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
	delete brain_;
}

// OPERATOR OVERLOADS -----------------------------------------------------------------

// = overload
Dog&	Dog::operator=(Dog const& rhs)
{
	std::cout << SPRINGGREEN5 << "calling Dog assignement operator" << std::endl;
	type_ = rhs.type_;
	*brain_ = *(rhs.brain_);
	return *this;
}

// MEMBER FUNCTIONS ------------------------------------------------------------------

void	Dog::makeSound() const
{
	std::cout << "Waf! Waf!" << std::endl;
}

Brain	*Dog::getBrain() const
{
	return brain_;
}

void Dog::testDeepCopyOf(Dog const& other) const
{
	std::cout << std::endl;
	std::cout << "TESTING TWO DOG'S BRAIN" << std::endl;
	std::cout << "this->brain address is : " << this->brain_ << std::endl;
	std::cout << "other.brain address is : " << other.brain_ << std::endl;
	std::cout << std::endl;
	std::cout << "this->brain ~ other->brain" << std::endl;
	std::cout << "------------------------------" << std::endl;
	for (int i = 0; i < 100; i++)
		std::cout << DARKGOLDENROD
		<< (brain_->getIdeas())[i]
		<< RESET << " | "
		<< DARKCYAN
		<< ((other.getBrain())->getIdeas())[i]
		<< RESET
		<< std::endl;
	std::cout << std::endl;
}