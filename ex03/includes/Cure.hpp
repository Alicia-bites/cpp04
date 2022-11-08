#ifndef Cure_HPP
# define Cure_HPP

#include "AMateria.hpp"

class Cure :  public AMateria
{
	private:
		std::string type_;
	public:
		Cure();
		Cure(Cure const& ori);
		~Cure();
		Cure& operator=(Cure const& rhs);

		// void				displayCure(std::string target);
		std::string const&	getType() const;
		Cure 				*clone() const;
		void 				use(ICharacter& target);
};

#endif