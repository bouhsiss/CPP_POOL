#include"ScavTrap.hpp"
#include"FragTrap.hpp"

int main(){
	ScavTrap robot1("Machina");
	ScavTrap robot2("Random Bot");
	FragTrap robot3("idk");
	FragTrap robot4("houda");

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

	robot3.attack(robot4.getName());
	robot4.takeDamage(5);
	robot4.beRepaired(5);
	robot4.attack(robot3.getName());
	robot3.takeDamage(15);
	robot3.beRepaired(1);
	robot4.attack(robot3.getName());
	robot3.takeDamage(10);
	robot4.attack(robot3.getName());
	robot3.takeDamage(1);
	robot3.beRepaired(1);
}