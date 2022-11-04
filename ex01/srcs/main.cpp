#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	// std::cout << "TEST PROVIDED BY SUBJECT" << std::endl;
	// const Animal* dog = new Dog();
	// const Animal* cat = new Cat();
	// delete dog; // should not create a leak
	// delete cat;

	// std::cout << "----------------------------------------------" << std::endl;
	// std::cout << "A FEW MORE TESTS TO CHECK ASSIGMENT OPERATORS" << std::endl;
	// Dog medor;
	// std::cout << medor << std::endl;
	// Dog pluto;
	// std::cout << pluto << std::endl;
	// pluto = medor;
	// std::cout << pluto << std::endl;

	// Animal* garfield = new Cat();
	// std::cout << *garfield << std::endl;
	// Animal* felix = new Cat();
	// *felix = *garfield;
	// std::cout << *felix << std::endl;
	// delete garfield;
	// delete felix;

	// Dog charly;
	// Dog tom;
	// tom = charly;
	// std::cout << charly << std::endl;
	// std::cout << tom << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
	std::cout << "TEST REQUIRED BY SUBJECT" << std::endl;
	Animal	*animals[100];
	Brain	*brain;
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
	std::cout << std::endl;
	std::cout << "Giving the animal[2]'s brain a few ideas..." << std::endl;
	brain = animals[2]->getBrain();
	brain->ideas_[0] = "idea 0";
	brain->ideas_[1] = "idea 1";
	brain->ideas_[2] = "idea 2";
	std::cout << animals[2]->getBrain()->ideas_[0] << std::endl;
	std::cout << animals[2]->getBrain()->ideas_[1] << std::endl;
	std::cout << animals[2]->getBrain()->ideas_[2] << std::endl;
	std::cout << std::endl;
	std::cout << "Testing if copy is a deep copy by copiing our animal[2] into animal[56]: " << std::endl;
	*(animals[56]) = *(animals[2]);
	std::cout << "Printing animal[56]'s second idea..." << std::endl;
	std::cout << animals[56]->getBrain()->ideas_[2] << std::endl;

	for (int i = 0; i < 100; i++)
		delete animals[i];
	return 0;
}