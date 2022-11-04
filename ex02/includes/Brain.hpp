#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include "colors.hpp"

class Brain
{
	private:
		std::string *ideas_;

	public:
		Brain();
		Brain(std::string& idea);
		Brain(Brain const& ori);
		~Brain();
		Brain&	operator=(Brain const& rhs);

		std::string *getIdeas();
		void		setIdeas(std::string idea);
		void		displayIdeas();
};

#endif