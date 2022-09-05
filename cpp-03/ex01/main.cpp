#include"ScavTrap.hpp"

int main(){
	ScavTrap robot1("Machina");
	ScavTrap robot2("Random Bot");
	
	robot1.attack(robot2.getName());
	robot2.takeDamage(5);
	robot2.beRepaired(5);
	robot2.attack(robot1.getName());
	robot1.takeDamage(15);
	robot1.beRepaired(1);
	robot2.attack(robot1.getName());
	robot1.takeDamage(10);
	robot2.attack(robot1.getName());
	robot1.takeDamage(1);
	robot1.beRepaired(1);
}