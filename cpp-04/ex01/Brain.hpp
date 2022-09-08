#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain{
	public :
		Brain();
		Brain& operator=(const Brain&);
		Brain(const Brain&);
		~Brain();
	private :
		std::string ideas[100];
};

#endif