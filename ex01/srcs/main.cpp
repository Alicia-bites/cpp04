#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	std::cout << "TESTS #1" << std::endl;
	std::cout << "TEST PROVIDED BY SUBJECT" << std::endl;
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	delete dog; // should not create a leak
	delete cat;

	std::cout << "----------------------------------------------" << std::endl;
	std::cout << "TESTS #2" << std::endl;
	std::cout << "A FEW MORE TESTS TO CHECK ASSIGMENT OPERATORS" << std::endl;
	Dog medor;
	std::cout << medor << std::endl;
	Dog pluto;
	std::cout << pluto << std::endl;
	pluto = medor;
	std::cout << pluto << std::endl;

	Animal* garfield = new Cat();
	std::cout << *garfield << std::endl;
	Animal* felix = new Cat();
	*felix = *garfield;
	std::cout << *felix << std::endl;
	delete garfield;
	delete felix;

	Dog charly;
	Dog jasper;
	jasper = charly;
	std::cout << charly << std::endl;
	std::cout << jasper << std::endl;

	std::cout << "----------------------------------------------" << std::endl;
	std::cout << "TESTS #3" << std::endl;
	std::cout << "TEST REQUIRED BY SUBJECT" << std::endl;
	Animal	*animals[100];
	std::cout << "Creating 50 Animals of type Cat : " << std::endl;
	for (int i = 0; i < 50; i++)
	{
		animals[i] = new Cat();
		std::cout << animals[i]->getType() << std::endl;
	}
	std::cout << "Creating 50 Animals of type Dog : " << std::endl;
	for (int i = 50; i < 100; i++)
	{
		animals[i] = new Dog();
		std::cout << animals[i]->getType() << std::endl;
	}
	for (int i = 0; i < 100; i++)
		delete animals[i];

	std::cout << "----------------------------------------------" << std::endl;
	std::cout << "TESTS #4" << std::endl;
	std::cout << "Testing if copy is a deep copy by copiing our animal[2] into animal[56]: " << std::endl;
	
	Dog sally;
	Cat tom;

	(sally.getBrain())->setIdeas("bone baby");
	(sally.getBrain())->displayIdeas();
	(tom.getBrain())->setIdeas("I'll get you Jerry!");
	(tom.getBrain())->displayIdeas();

	Dog sallyCopy;
	Cat tomCopy;

	(sallyCopy.getBrain())->displayIdeas();
	(tomCopy.getBrain())->displayIdeas();

	sallyCopy = sally;
	tomCopy = tom;

	sally.testDeepCopyOf(sallyCopy);
	tom.testDeepCopyOf(tomCopy);

	return 0;
}