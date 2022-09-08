#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public :
		WrongCat();
		WrongCat& operator=(const WrongCat&);
		WrongCat(const WrongCat&);
		~WrongCat();
		void makeSound(void) const;
};

#endif