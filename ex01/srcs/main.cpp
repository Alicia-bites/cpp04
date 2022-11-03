#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	std::cout << dog->getType() << " makes this sound: " << std::endl;
	dog->makeSound();
	std::cout << std::endl;

	std::cout << cat->getType() << " makes this sound: " << std::endl;
	cat->makeSound(); // will output the cat sound!
	std::cout << std::endl;

	std::cout << meta->getType() << " makes this sound: " << std::endl;
	meta->makeSound();
	std::cout << std::endl;

	std::cout << "--------------------------------------------------" << std::endl;
	
	const WrongAnimal* wrongmeta = new WrongAnimal;
	const WrongAnimal* wrongcat = new WrongCat();
	
	std::cout << dog->getType() << " makes this sound : " << std::endl;
	dog->makeSound();
	std::cout << std::endl;

	std::cout << wrongcat->getType() << " makes this sound: " << std::endl;
	wrongcat->makeSound(); // will NOT output the cat sound!
	std::cout << std::endl;

	std::cout << meta->getType() << " makes this sound: " << std::endl;
	meta->makeSound();
	std::cout << std::endl;

	delete meta;
	delete dog;
	delete cat;
	delete wrongmeta;
	delete wrongcat;
	return 0;
}