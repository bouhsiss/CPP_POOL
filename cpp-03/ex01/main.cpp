#include"ScavTrap.hpp"

int main(){
	/* [#########  ClapTrap tests #########] 
		ClapTrap robot1("Machina");
	ClapTrap robot2("Random Bot");

	std::cout << std::endl << robot1 << std::endl;
	std::cout << robot2 << std::endl;
	robot1.attack(robot2.getName());
	robot2.takeDamage(5);
	robot2.beRepaired(5);*/


	ScavTrap robot1("Machina");
	ScavTrap robot2("Random Bot");

	std::cout << std::endl << robot1 << std::endl;
	std::cout << robot2 << std::endl;
	robot1.attack(robot2.getName());
	robot2.takeDamage(5);
	robot2.beRepaired(5);
	robot1.guardGate();
	robot2.guardGate();
	std::cout << std::endl;
}