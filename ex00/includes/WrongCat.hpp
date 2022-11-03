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
		std::string	getType() const;
		void		displayAttributes(std::ostream& o) const;
		WrongCat&		operator=(WrongCat const& rhs);
};

std::ostream&	operator<<(std::ostream o, WrongAnimal const& rhs);

#endif