#include "Cat.hpp"

//default constructor
Cat::Cat()
: Animal("Cat")
, brain_(new Brain())
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
	delete brain_;
}

// OPERATOR OVERLOADS -----------------------------------------------------------------

Cat&	Cat::operator=(Cat const& rhs)
{
	std::cout << PURPLE3 << "calling Cat assignement operator" << RESET << std::endl;
	type_ = rhs.type_;
	*brain_ = *(rhs.brain_);
	return *this;
}

// MEMBER FUNCTIONS ------------------------------------------------------------------

void	Cat::makeSound() const
{
	std::cout << "Meeeeoww" << std::endl;
}

Brain	*Cat::getBrain() const
{
	return brain_;
}

void Cat::testDeepCopyOf(Cat const& other) const
{
	std::cout << std::endl;
	std::cout << "TESTING TWO CAT'S BRAIN" << std::endl;
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