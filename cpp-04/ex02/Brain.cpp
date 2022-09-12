#include "Brain.hpp"

#include <iostream>

Brain::Brain() {
	std::cout << "Brain has been constructed." << std::endl;
}

Brain& Brain::operator=(const Brain& obj) {
	std::cout << "Brain assignment operator called." << std::endl;
	if(this != &obj)
	{
		for(int i = 0; i < 100; i++)
			this->ideas[i] = obj.ideas[i];
	}
	return(*this);
}

Brain::Brain(const Brain& obj) {
	std::cout << "Brain Copy constructor called." << std::endl;
	(*this) = obj;
}

Brain::~Brain() {
	std::cout << "Brain has been destructed." << std::endl;
}

std::string const* Brain::getIdeas(void) const {
	return(ideas);
}

void Brain::setIdeas(std::string idea) {
	for (int i = 0; i < 100; i++)
		this->ideas[i] = idea;
}