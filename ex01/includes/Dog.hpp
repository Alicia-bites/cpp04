#ifndef DOG_HPP
# define DOG_HPP

#include "Brain.hpp"
#include "Animal.hpp"

class Dog : public Animal
{
	private :
		Brain	*brain_;
	public :
		Dog();
		Dog(Dog const& ori);
		virtual ~Dog();
		Dog&	operator=(Dog const& rhs);
		
		void	makeSound() const;
		Brain	*getBrain() const;

		void testDeepCopyOf(Dog const& other) const;

};

#endif