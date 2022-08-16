#include"Zombie.hpp"

Zombie *newZombie(std::string name){
	Zombie* heapZom = new Zombie(name);
	return(heapZom);
}