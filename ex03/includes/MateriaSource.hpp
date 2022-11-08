#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*memory_[4];
	public:
		MateriaSource();
		MateriaSource(MateriaSource const& ori);
		~MateriaSource();
		MateriaSource&	operator=(MateriaSource const& rhs);

		void 		learnMateria(AMateria *m);
		AMateria	*createMateria(std::string const& type);
};

#endif