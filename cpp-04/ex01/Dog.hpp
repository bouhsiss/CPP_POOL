#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	public :
		Dog();
		Dog& operator=(const Dog&);
		Dog(const Dog&);
		~Dog();
		void makeSound(void) const;
	private :
		Brain* DogBrain;
};

#endif