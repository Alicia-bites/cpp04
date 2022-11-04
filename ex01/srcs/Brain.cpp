#include "Brain.hpp"

// default constructor
Brain::Brain()
{
	std::cout << DEEPPINK3 << "Brain default constructor called" << std::endl;
	std::cout << DEEPPINK3 << "Filling brain with a 100 ideas..." << std::endl;
	ideas_ = new std::string[100];
	for (int i = 0; i < 100; i++)
		ideas_[i] = "total emptyness";
}

// constructor #1
Brain::Brain(std::string& idea)
{
	std::cout << DEEPPINK3 << "A Brain constructor called" << std::endl;
	std::cout << DEEPPINK3 << "Filling brain with a 100 ideas..." << std::endl;
	ideas_ = new std::string[100];
	for (int i = 0; i < 100; i++)
		ideas_[i] = idea;
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
		ideas_[i] = rhs.ideas_[i] + " --copied";
	return *this;
}

std::string *Brain::getIdeas()
{
	return (ideas_);
}

void	Brain::setIdeas(std::string idea)
{
	std::cout << DEEPPINK3 << "Setting ideas to: " << idea << RESET << std::endl;
	for (int i = 0; i < 100; i++)
		ideas_[i] = idea;
}

void	Brain::displayIdeas()
{
	for (int i = 0; i < 100; i++)
		std::cout << ideas_[i] << std::endl;
}