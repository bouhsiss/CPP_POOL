#include"ClapTrap.hpp"

int main(){
	ClapTrap robot1("Machina");
	ClapTrap robot2("Random Bot");

	robot1 = robot2;
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