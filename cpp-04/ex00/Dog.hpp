#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
	public :
		Dog();
		Dog& operator=(const Dog&);
		Dog(const Dog&);
		~Dog();
		void makeSound(void) const;
};

#endif