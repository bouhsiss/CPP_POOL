#include"Dog.hpp"

Dog::Dog() : Animal("Dog"){
	std::cout << "Dog had been constructed." << std::endl;
	DogBrain = new Brain();
}

Dog& Dog::operator=(const Dog& obj) {
	std::cout << "Dog assignment operator called." << std::endl;
	*(DogBrain) = *(obj.DogBrain);
	return(*this);
}

Dog::Dog(const Dog& obj) {
	std::cout << "Dog copy constructor called." << std::endl;
	this->DogBrain = new Brain();
	(*this) = obj;
}

Dog::~Dog() {
	std::cout << "Dog has been destructed." << std::endl;
	delete DogBrain;
}

void Dog::makeSound(void) const{
	std::cout << "*BAAAARKS*" << std::endl;
}