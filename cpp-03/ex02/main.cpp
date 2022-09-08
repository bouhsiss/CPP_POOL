#include"ScavTrap.hpp"
#include"FragTrap.hpp"

int main(){
	/* [#########  ClapTrap tests #########] 
	ClapTrap robot1("Machina");
	ClapTrap robot2("Random Bot");

	std::cout << std::endl << robot1 << std::endl;
	std::cout << robot2 << std::endl;
	robot1.attack(robot2.getName());
	robot2.takeDamage(5);
	robot2.beRepaired(5);*/

	/* [#########  ScavTrap tests #########] 
	ScavTrap robot1("Machina");
	ScavTrap robot2("Random Bot");

	std::cout << std::endl << robot1 << std::endl;
	std::cout << robot2 << std::endl;
	robot1.attack(robot2.getName());
	robot2.takeDamage(5);
	robot2.beRepaired(5);
	robot1.guardGate();
	robot2.guardGate();
	std::cout << std::endl; */

	FragTrap robot1("Machina");
	FragTrap robot2("Random Bot");

	std::cout << std::endl << robot1 << std::endl;
	std::cout << robot2 << std::endl;
	robot1.attack(robot2.getName());
	robot2.takeDamage(5);
	robot2.beRepaired(5);
	robot1.highFiveGuys();
	robot2.highFiveGuys();
	std::cout << std::endl;
}
