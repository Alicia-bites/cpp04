#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "colors.hpp"
# include "Brain.hpp"

class Animal
{
	protected :
		std::string	type_;
	public :
		Animal();
		Animal(std::string type);
		Animal(Animal const& ori);
		virtual ~Animal();
		virtual Animal&		operator=(Animal const& rhs);

		virtual void		makeSound() const = 0;
		std::string 		getType() const;
		void				displayAttributes(std::ostream& o) const;
};

std::ostream&	operator<<(std::ostream& o, Animal const& rhs);
#endif