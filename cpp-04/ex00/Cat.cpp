#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << "Cat has been constructed." << std::endl;
}

Cat& Cat::operator=(const Cat& obj) {
	std::cout << "Cat assignment operator called." << std::endl;
	type = obj.type;
	return(*this);
}

Cat::Cat(const Cat& obj) {
	std::cout << "Cat copy constructor called." << std::endl;
	(*this) = obj;
}

Cat::~Cat(){
	std::cout << "Cat has been destructed." << std::endl;
}

void Cat::makeSound(void) const{
	std::cout << "*PUURRRRRRR*" << std::endl;
}