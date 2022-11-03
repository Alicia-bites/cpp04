#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	private:

	public:
		Brain();
		Brain(Brain const& ori);
		~Brain();
		Brain&	operator=(Brain const& rhs);

		std::string ideas[100];
};

#endif