#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout << "WrongCat has been constructed." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& obj) {
	std::cout << "WrongCat assignment operator called." << std::endl;
	type = obj.type;
	return(*this);
}

WrongCat::WrongCat(const WrongCat& obj) {
	std::cout << "WrongCat copy constructor called." << std::endl;
	(*this) = obj;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat has been destructed." << std::endl;
}

void WrongCat::makeSound(void) const {
	std::cout << "[WRONGCAT SOUND]" << std::endl;
}