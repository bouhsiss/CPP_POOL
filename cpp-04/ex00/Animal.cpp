#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal has been constructed." << std::endl;
	type = "";
}

Animal::Animal(std::string type) {
	std::cout << "Animal has been constructed" << std::endl;
	this->type = type;
}

Animal& Animal::operator=(const Animal& obj) {
	std::cout << "Animal assignment operator called." << std::endl;
	type = obj.type;
	return(*this);
}

Animal::Animal(const Animal& obj){
	std::cout << "Animal copy constructor called" << std::endl;
	(*this) = obj;
}

Animal::~Animal(){
	std::cout << "Animal has been destructed." << std::endl;
}

const std::string& Animal::getType(void) const{ return(type); }

void Animal::makeSound(void) const{
	std::cout << "[RANDOM VOICES]" << std::endl;
}