#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice :  public AMateria
{
	private:
		std::string type_;
	public:
		Ice();
		Ice(Ice const& ori);
		~Ice();
		Ice& operator=(Ice const& rhs);

		// void				displayIce(std::string target);
		std::string const&	getType() const;
		Ice 				*clone() const;
		void 				use(ICharacter& target);
};

#endif