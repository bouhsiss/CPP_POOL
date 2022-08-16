#include"Zombie.hpp"

Zombie::Zombie(){}

Zombie::~Zombie(void){
	std::cout << "Zombie " << this->name << " has been destructed" << std::endl;
}

std::string Zombie::getName(void) const{
	return(this->name);
}

void Zombie::announce(void){
	std::cout << getName();
	std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name){
	this->name = name;
}