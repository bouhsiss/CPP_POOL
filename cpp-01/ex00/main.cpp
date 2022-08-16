#include"Zombie.hpp"

int main(){
	Zombie *Zombie1 = newZombie("Ash Williams");
	Zombie1->announce();
	delete(Zombie1);

	randomChump("Evil Ash");
	return(EXIT_SUCCESS);
}