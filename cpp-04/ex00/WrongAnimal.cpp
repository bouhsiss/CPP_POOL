#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal has been constructed." << std::endl;
	type = "";
}

WrongAnimal::WrongAnimal(std::string type) {
	std::cout << "WrongAnimal has been constructed." << std::endl;
	this->type = type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj) {
	std::cout << "WrongAnimal assignment operator called." << std::endl;
	type = obj.type;
	return(*this);
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj) {
	std::cout << "WrongAnimal copy constructor called." << std::endl;
	(*this) = obj;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal has been destructed." << std::endl;
}

void WrongAnimal::makeSound(void) const{
	std::cout << "[WRONGANIMAL SOUND]" << std::endl;
}

const std::string& WrongAnimal::getType(void) const { return(type); }