#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <cstddef>
#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		AMateria			*inventory_[4];
		std::string const	name_;
	public:
		Character(std::string name);
		Character(Character const& ori);
		~Character();
		Character & operator=(Character const& rhs);

		std::string const& getName() const;
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		AMateria	*getMateria(int i) const;

};

#endif