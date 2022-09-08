#include"Dog.hpp"

Dog::Dog() : Animal("Dog"){
	std::cout << "Dog had been constructed." << std::endl;
}

Dog& Dog::operator=(const Dog& obj) {
	std::cout << "Dog assignment operator called." << std::endl;
	type = obj.type;
	return(*this);
}

Dog::Dog(const Dog& obj) {
	std::cout << "Dog copy constructor called." << std::endl;
	(*this) = obj;
}

Dog::~Dog() {
	std::cout << "Dog has been destructed." << std::endl;
}

void Dog::makeSound(void) const{
	std::cout << "*BAAAARKS*" << std::endl;
}