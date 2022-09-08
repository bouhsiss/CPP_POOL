#include"ClapTrap.hpp"

int main(){
	ClapTrap robot1("Machina");
	ClapTrap robot2("Random Bot");

	std::cout << std::endl << robot1 << std::endl;
	std::cout << robot2 << std::endl;
	robot1.attack(robot2.getName());
	robot2.takeDamage(5);
	robot2.beRepaired(5);
}