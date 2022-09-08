#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal{
	public :
		Animal();
		Animal& operator=(const Animal&);
		Animal(const Animal&);
		virtual ~Animal();
		const std::string& getType(void) const;
		virtual void makeSound(void) const;
	protected :
		Animal(std::string);
		std::string type;
};

#endif