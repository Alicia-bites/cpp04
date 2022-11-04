#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private :
		std::string type_;
	public :
		WrongCat();
		WrongCat(WrongCat const& ori);
		~WrongCat();
		WrongCat&	operator=(WrongCat const& rhs);
		
		void			makeSound() const;
};

#endif