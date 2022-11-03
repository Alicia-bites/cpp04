#include "Brain.hpp"

// default constructor
Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

// copy constructor
Brain::Brain(Brain const& ori)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = ori;
}

// destructor
Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

// copy assigment operator
Brain&	Brain::operator=(Brain const& rhs)
{
	std::cout << "Brain copy assignement operator called" << std::endl;
}



