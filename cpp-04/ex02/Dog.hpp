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
		Brain *getBrain(void) const;
		void setBrain(std::string idea);
	private :
		Brain* DogBrain;
};

#endif