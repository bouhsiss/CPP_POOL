#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << "Cat has been constructed." << std::endl;
	CatBrain = new Brain();
}

Cat& Cat::operator=(const Cat& obj) {
	std::cout << "Cat assignment operator called." << std::endl;
	*(CatBrain) = *(obj.CatBrain);
	return(*this);
}

Cat::Cat(const Cat& obj) {
	std::cout << "Cat copy constructor called." << std::endl;
	this->CatBrain = new Brain();
	(*this) = obj;
}

Cat::~Cat(){
	std::cout << "Cat has been destructed." << std::endl;
	delete CatBrain;
}

void Cat::makeSound(void) const{
	std::cout << "*PUURRRRRRR*" << std::endl;
}


Brain* Cat::getBrain(void) const {
	return(CatBrain);
}

void Cat::setBrain(std::string idea){
	CatBrain->setIdeas(idea);
} 