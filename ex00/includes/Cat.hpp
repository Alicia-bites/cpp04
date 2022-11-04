#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	private :
	
	public :
		Cat();
		Cat(Cat const& ori);
		~Cat();
		Cat&		operator=(Cat const& rhs);
		
		void		makeSound() const;
};


#endif