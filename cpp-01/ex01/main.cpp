#include"Zombie.hpp"

int main(){
	int N;
	std::cout << "enter how many zombie you want to create ?" << std::endl;
	if(!(std::cin >> N)){
		std::cout << "please enter a valid number :";
		std::cin.clear();
		std::cin.ignore(10000,'\n');
	}
	Zombie *zombies = zombieHorde(N, "frankenstein");

	for(int i = 0; i < N; i++)
		zombies[i].announce();
	delete[] zombies;
}