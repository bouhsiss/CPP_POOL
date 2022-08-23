#include"Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
	Zombie* zombie_arr = new Zombie[N];

	int i = -1;
	while(++i < N)
		zombie_arr[i].setName(name + "_" + std::to_string(i));
	return(zombie_arr);
}	