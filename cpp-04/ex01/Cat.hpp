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
	private :
		Brain* CatBrain;
};

#endif