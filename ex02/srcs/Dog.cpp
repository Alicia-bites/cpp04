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

// Animal&	Dog::operator=(Animal const& rhs)
// {
// 	std::cout << SPRINGGREEN5 << "calling Animal-Dog assignement operator" << std::endl;
// 	this->type_ = rhs.getType();
// 	*brain_ = *(rhs.getBrain());
// 	return *this;
// }

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
	std::cout << "My brain's heap address: " << static_cast<void*>(this->brain_) << std::endl;
	std::cout << "Other's heap address: " << static_cast<void*>(other.getBrain()) << std::endl;
	std::cout << std::endl;
	std::cout << "My brain's ideas  |  Other brain's ideas\n";
	for (int i = 0; i < 30; i++)
		std::cout << "-";
	std::cout << std::endl;
	for (int i = 0; i < 100; i++)
		std::cout << DARKGOLDENROD
		<< ((this->brain_)->getIdeas())[i]
		<< RESET << " | "
		<< DARKCYAN
		<< ((other.getBrain())->getIdeas())[i]
		<< RESET
		<< std::endl;
	std::cout << std::endl;
}