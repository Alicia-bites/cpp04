#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	private :
		std::string type_;
	public :
		Cat();
		Cat(Cat const& ori);
		~Cat();
		std::string	getType() const;
		void		displayAttributes() const;
};

std::ostream&	operator<<(std::ostream o, Animal const& rhs);

#endif