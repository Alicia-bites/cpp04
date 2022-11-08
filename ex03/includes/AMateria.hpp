#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include <cstddef>
#include "colors.hpp"
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string type_;
	public:
		AMateria();
		AMateria(std::string const& type);
		virtual ~AMateria();
		AMateria(AMateria const& ori);
		AMateria&	operator=(AMateria const& rhs); // cannot instanciate so cannot use this

		std::string const&	getType() const; // Returns the materia type
		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter& target);
};

#endif