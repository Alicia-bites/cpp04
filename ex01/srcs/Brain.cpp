#include "Brain.hpp"

// default constructor
Brain::Brain()
{
	std::cout << DEEPPINK3 << "Brain default constructor called" << std::endl;
}

// copy constructor
Brain::Brain(Brain const& ori)
{
	std::cout << DEEPPINK3 << "Brain copy constructor called" << RESET << std::endl;
	*this = ori;
}

// destructor
Brain::~Brain()
{
	std::cout << DEEPPINK3 << "Brain destructor called" << RESET << std::endl;
}

// copy assigment operator
Brain&	Brain::operator=(Brain const& rhs)
{
	std::cout << DEEPPINK3 << "Brain copy assignement operator called" << RESET << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas_[i] = rhs.ideas_[i];
	return *this;
}