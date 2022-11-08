#include "MateriaSource.hpp"
#include "AMateria.hpp"

// Default constructor
MateriaSource::MateriaSource()
{
	std::cout << MEDIUMORCHID3 << "Calling MateriaSource default constructor" << RESET << std::endl;
	for(int i = 0; i < 4; i++)
		memory_[i] = 0;
}

// Copy constructor
MateriaSource::MateriaSource(MateriaSource const& ori)
{
	std::cout << MEDIUMORCHID3 << "Calling MateriaSource copy constructor" << RESET << std::endl;
	for (int i = 0; i < 4; i++)
		if (ori.memory_[i])
			memory_[i] = (ori.memory_[i])->clone();
}

// Assignement operator (destroy & replace elt in memory)
MateriaSource & MateriaSource::operator=(MateriaSource const & rhs)
{
	std::cout << MEDIUMORCHID3 << "Calling MateriaSource assignement operator" << RESET << std::endl;
	for(int i = 0; i < 4; i++)
	{
		if (memory_[i])
			delete memory_[i];
		if (rhs.memory_[i])
			memory_[i] = (rhs.memory_[i])->clone();
	}
	return (*this);
}

// Destructor
MateriaSource::~MateriaSource()
{
	std::cout << MEDIUMORCHID3 << "Calling MateriaSource destructor" << RESET << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (memory_[i])
			delete memory_[i];
	}
}

// MEMBER FUNCTIONS ------------------------------------------------------------

// Copy the materia given in param and put it in memory
// (if space) to keep it for later.
void MateriaSource::learnMateria(AMateria *m)
{
	int i = 0;
	while (memory_[i] != 0 && i < 4)
		i++;
	if (i > 3)
	{
		std::cout << "Memory is full. 0/4 space available.";
		return ;
	}
	memory_[i] = m;
	std::cout << "Materia of type " << ORANGERED1 << m->getType() << RESET << " is now in memory." << std::endl;
}

// Find a materia of requested type and return a copy (if found).
// Otherwise, returns NULL.
AMateria* MateriaSource::createMateria(std::string const& type)
{
	// int i = 0;
	// while ((memory_[i])->getType() != type && memory_[i] && i < 4)
	// 	i++;
	// if (i >= 4 || memory_[i] == 0)
	// {
	// 	std::cout << type << " materia does not exit" << std::endl;
	// 	return (NULL);
	// }
	// std::cout << "Materia " << type << " created" << std::endl;
	// return (((memory_)[i])->clone());

	int i = 0;
	while (memory_[i] && i < 4)
	{
		if (memory_[i]->getType() == type)
		{
			std::cout << "A Materia of type " << ORANGERED1 << type << RESET << " was created." << std::endl;
			return (memory_[i])->clone();
		}
		i++;
	}
	std::cout << "A Materia of type " << ORANGERED1 << type << RESET << " has not be found in memory." << std::endl;
	return NULL;
}