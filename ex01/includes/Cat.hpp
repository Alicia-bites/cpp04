#ifndef CAT_HPP
# define CAT_HPP

#include "Brain.hpp"
#include "Animal.hpp"

class Cat : public Animal
{
	private :
		Brain	*brain_;
	public :
		Cat();
		Cat(Cat const& ori);
		virtual ~Cat();
		Cat&	operator=(Cat const& rhs);
		
		Animal&	operator=(Animal const& rhs);

		void	makeSound() const;
		Brain	*getBrain() const;
};

#endif