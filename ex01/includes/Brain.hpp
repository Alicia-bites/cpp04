#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include "colors.hpp"

class Brain
{
	private:

	public:
		Brain();
		Brain(Brain const& ori);
		~Brain();
		Brain&	operator=(Brain const& rhs);

		std::string ideas_[100];
		
};

#endif