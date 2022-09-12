#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal{
	public :
		Animal();
		Animal& operator=(const Animal&);
		Animal(const Animal&);
		virtual ~Animal();
		const std::string& getType(void) const;
		virtual void makeSound(void) const = 0;
	protected :
		Animal(std::string);
		std::string type;
};

#endif