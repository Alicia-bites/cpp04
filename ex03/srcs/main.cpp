#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main()
{
	std::cout << "CREATING MATERIAS IN MEMORY" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	std::cout << "-------------------------------------------------------"
		<< std::endl;
	std::cout << "CREATING NEW CHARACTER : ME" << std::endl;
	ICharacter* me = new Character("me");
	AMateria* tmp;
	std::cout << "Testing equipment..." << std::endl;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	std::cout << std::endl;
	std::cout 
		<< "Testing with a materia that does not exist in memory :" << std::endl;
	tmp = src->createMateria("GNAGNA"); // no type
	me->equip(tmp);
	
	std::cout << "-------------------------------------------------------"
		<< std::endl;
	std::cout << "CREATING NEW CHARACTER : BOB" << std::endl;
	ICharacter* bob = new Character("bob");
	std::cout << "Testing the 'use' action..." << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << "Trying to use a skill at a non-existing index" << std::endl;
	me->use(-4, *bob);
	me->use(-2147483648, *bob);
	me->use(2147483647, *bob);
	me->use(42, *bob);
	
	std::cout << "-------------------------------------------------------"
		<< std::endl;
	std::cout << "TESTING DEEP COPY" << std::endl;
	std::cout << "Creating new character called Tommy..." << std::endl;
	Character *Tommy = new Character("Tommy");
	std::cout << "Filling his inventory with skills..." << std::endl;
	AMateria *temp = src->createMateria("cure");
	AMateria *tempo = src->createMateria("ice");
	AMateria *supertemp = src->createMateria("GNAGNA");
	Tommy->equip(temp);
	Tommy->equip(tempo);
	Tommy->equip(supertemp);
	std::cout << "Creating a copy of Tommy named TommyCopy" << std::endl;
	Character *TommyCopy = new Character(*Tommy);
	std::cout
		<< "Printing Tommy's AMateria's address at index 0 : "
		<< Tommy->getMateria(0) << std::endl;
	std::cout
		<< "Printing Tommy's AMateria's type at index 0 : "
		<< (Tommy->getMateria(0))->getType() << std::endl;
	std::cout << "Printing TommyCopy's AMateria's address at index 0 : "
		<< TommyCopy->getMateria(0) << std::endl;
	std::cout << "Printing TommyCopy's AMateria's type at Index 0 : "
		<< (TommyCopy->getMateria(0))->getType() << std::endl;
	std::cout << "Testing assignement operator copy" << std::endl;
	Character Polly("Polly");
	Polly = *Tommy;
	std::cout
		<< "Printing Polly's AMateria's address at index 0 : "
		<< Polly.getMateria(0) << std::endl;
	std::cout
	<< "Printing Polly's AMateria's type at index 0 : "
		<< (Polly.getMateria(0))->getType() << std::endl;
	std::cout << "-------------------------------------------------------"
		<< std::endl;
	std::cout << "Testing unequip method..." << std::endl;
	AMateria *binCollector = Tommy->getMateria(0);
	Tommy->unequip(0);
	delete binCollector;
	Tommy->unequip(-4);
	std::cout << "-------------------------------------------------------"
		<< std::endl;

	delete bob;
	delete me;
	delete Tommy;
	delete src;
	delete TommyCopy;
	return 0;
}
