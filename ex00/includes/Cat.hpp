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
		void		displayAttributes(std::ostream& o) const;
		Cat&		operator=(Cat const& rhs);
};

std::ostream&	operator<<(std::ostream o, Animal const& rhs);

#endif