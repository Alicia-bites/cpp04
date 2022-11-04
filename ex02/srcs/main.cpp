#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	std::cout << "TESTS #1" << std::endl;
	std::cout << "Testing if Animal class is still instanciable..." << std::endl;
	
	
	// Animal girafe;


	std::cout << std::endl;
	std::cout << "-----------------------" << std::endl;
	std::cout << std::endl;

	std::cout << "TESTS #2" << std::endl;

	Animal *doggy = new Dog();
	doggy->makeSound();

	Animal *cat = new Cat();
	cat->makeSound();

	std::cout << std::endl;
	std::cout << "-----------------------" << std::endl;
	std::cout << std::endl;


	std::cout << "TESTS #3" << std::endl;

	Dog medor;
	Cat tom;

	(medor.getBrain())->setIdeas("bone baby");
	(medor.getBrain())->displayIdeas();
	(tom.getBrain())->setIdeas("I'll get you Jerry!");
	(tom.getBrain())->displayIdeas();

	Dog medorCopy;
	Cat tomCopy;

	(medorCopy.getBrain())->displayIdeas();
	(tomCopy.getBrain())->displayIdeas();

	medorCopy = medor;
	tomCopy = tom;

	medor.testDeepCopyOf(medorCopy);
	tom.testDeepCopyOf(tomCopy);
	return 0;
}