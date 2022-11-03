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
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << std::endl;
	cat->makeSound(); // will output the cat sound!
	dog->makeSound();
	meta->makeSound();
	std::cout << std::endl;

	const WrongAnimal* wrongcat = new WrongCat();
	std::cout << dog->getType() << " " << std::endl;
	std::cout << wrongcat->getType() << " " << std::endl;
	std::cout << std::endl;
	wrongcat->makeSound(); // will NOT output the cat sound!
	dog->makeSound();
	meta->makeSound();

	Animal unknown;
	std::cout << unknown << std::endl;

	return 0;
}