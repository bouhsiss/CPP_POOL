#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	public :
		Cat();
		Cat& operator=(const Cat&);
		Cat(const Cat&);
		~Cat();
		void makeSound(void) const;
		Brain *getBrain(void) const;
		void  setBrain(std::string idea);
	private :
		Brain* CatBrain;
};

#endif