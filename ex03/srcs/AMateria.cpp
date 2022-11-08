#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << TURQUOISE2 << "Calling AMateria default constructor" << RESET << std::endl;
}

AMateria::AMateria(std::string const& type)
:type_(type)
{
	std::cout << TURQUOISE2 << "Calling a AMateria constructor" << RESET << std::endl;

}

AMateria::AMateria(AMateria const& ori)
:type_(ori.type_)
{
	std::cout << TURQUOISE2 << "Calling AMateria copy constructor" << RESET << std::endl;
}

AMateria::~AMateria()
{
	std::cout << TURQUOISE2 << "Calling AMateria destructor" << RESET << std::endl;
}

// MEMBER FUNCTIONS ----------------------------------------------------------------

void	AMateria::use(ICharacter& target)
{
	std::cout << TURQUOISE2 << "Abstract use of materia on " << target.getName() << RESET << std::endl;
}

// -- GETTERS ----------------------------------------------------------------------

std::string const& AMateria::getType() const
{
	return type_;
}
