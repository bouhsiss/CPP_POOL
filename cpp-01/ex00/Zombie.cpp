#include"Zombie.hpp"

std::string Zombie::getName(void) const{
	return(this->name);
}

Zombie::Zombie(std::string name){
	this->name = name;
}

Zombie::~Zombie(void){
	std::cout << "Zombie " << this->name << " has been destructed" << std::endl;
}

void Zombie::announce(void){
	std::cout << getName();
	std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
