#include "Cure.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

Cure::Cure()
: AMateria("cure")
{
	std::cout << VIOLET << "Calling Cure default constructor"<< RESET << std::endl;
}

Cure::~Cure()
{
	std::cout << VIOLET << "Calling Cure destructor"<< RESET << std::endl;
}

Cure::Cure(Cure const& ori)
: AMateria(ori)
{
	std::cout << VIOLET << "Calling Cure copy instructor"<< RESET << std::endl;
}

Cure& Cure::operator=(Cure const& rhs)
{
	std::cout << VIOLET << "Calling Cure copy assignement operator"<< RESET << std::endl
		<< "Assigning from : " << rhs.type_;
	return *this;
}

std::string const & Cure::getType() const
{
	return type_;
}

// return a pointer on a new object of type Cure malloc'd
Cure *Cure::clone() const
{
	Cure	*ret = new Cure;
	return ret;
}

void Cure::use(ICharacter& target)
{
	std::cout << VIOLET << " heals " << target.getName() << "'s wound" << RESET << std::endl;
}