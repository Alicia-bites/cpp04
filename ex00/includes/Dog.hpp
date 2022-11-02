#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	private :
		std::string type_;
	public :
		Dog();
		Dog(Dog const& ori);
		~Dog();

		std::string	getType() const;
		void		displayAttributes() const;
};

std::ostream&	operator<<(std::ostream o, Animal const& rhs);
#endif