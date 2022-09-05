#include"FragTrap.hpp"

FragTrap::FragTrap(){}

FragTrap::FragTrap(std::string NameVal) : ClapTrap(NameVal){
	std::cout << "FragTrap parametrized constructor called ." << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& obj) {
	std::cout << "FragTrap assignment operator called." << std::endl;
	this->Name = obj.getName();
	this->HitPoints = obj.getHitPoints();
	this->EnergyPoints = obj.getEnergyPoints();
	this->AttackDamage = obj.getAttackDamage();
	return(*this);
}

FragTrap::FragTrap(const FragTrap& obj) {
	std::cout << "FragTrap Copy constructor called." << std::endl;
	*this = obj;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called." << std::endl;
}

void FragTrap::highFiveGuys(void){
	std::cout << "High five guuuuuuuys" << std::endl;
}