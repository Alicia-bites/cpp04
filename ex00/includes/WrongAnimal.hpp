#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include "colors.hpp"

class WrongAnimal
{
	private :
		std::string	type_;
	public :
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(WrongAnimal const& ori);
		~WrongAnimal();
		
		WrongAnimal&		operator=(WrongAnimal const& rhs);

		void		makeSound() const;
		std::string getType() const;

		void		displayAttributes(std::ostream& o) const;
};

std::ostream&	operator<<(std::ostream o, WrongAnimal const& rhs);

#endif