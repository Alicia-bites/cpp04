#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "colors.hpp"

class Animal
{
	private :
		std::string	type_;
	public :
		Animal();
		Animal(std::string type);
		Animal(Animal const& ori);
		~Animal();
		
		Animal&		operator=(Animal const& rhs);

		void		makeSound() const;
		std::string getType() const;

		void		displayAttributes(std::ostream& o) const;
};

std::ostream&	operator<<(std::ostream o, Animal const& rhs);
#endif