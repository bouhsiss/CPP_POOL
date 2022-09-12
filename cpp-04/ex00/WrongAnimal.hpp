#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal {
	public :
		WrongAnimal();
		WrongAnimal& operator=(const WrongAnimal&);
		WrongAnimal(const WrongAnimal&);
		virtual ~WrongAnimal();
		void makeSound(void) const;
		const std::string& getType(void) const;
	protected :
		WrongAnimal(std::string);
		std::string type;
};

#endif