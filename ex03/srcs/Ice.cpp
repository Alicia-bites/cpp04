#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

Ice::Ice()
: AMateria("ice")
{
	std::cout << DEEPSKYBLUE1<< "Calling Ice default constructor" << RESET << std::endl;
}

Ice::Ice(Ice const& ori)
: AMateria(ori)
{
	std::cout << DEEPSKYBLUE1<< "Calling Ice copy instructor " << RESET << std::endl;
}

Ice::~Ice()
{
	std::cout << DEEPSKYBLUE1<< "Calling Ice destructor" << RESET << std::endl;
}

Ice& Ice::operator=(Ice const& rhs)
{
	std::cout << DEEPSKYBLUE1<< "Calling Ice copy assignement operator" << RESET << std::endl
		<< "Assigning from : " << rhs.type_;
	return *this;
}

std::string const & Ice::getType() const
{
	return type_;
}

// return a pointer on a new object of type Ice assigned on the heap
Ice *Ice::clone() const
{
	Ice	*ret = new Ice;
	return ret;
}

void Ice::use(ICharacter& target)
{
	std::cout << DEEPSKYBLUE1<< " shoots a ice bolt at " << target.getName() << RESET << std::endl;
}