#include"ScavTrap.hpp"

ScavTrap::ScavTrap(std::string NameVal) : ClapTrap(NameVal){
	std::cout << "ScavTrap parametrized constructor called." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj){
	std::cout << "ScavTrap assignment operator called." << std::endl;
	this->Name = obj.getName();
	this->HitPoints = obj.getHitPoints();
	this->EnergyPoints = obj.getEnergyPoints();
	this->AttackDamage = obj.getAttackDamage();
	return(*this);
}

ScavTrap::ScavTrap(const ScavTrap& obj){
	std::cout << "ScavTrap copy constructor called." << std::endl;
	*this = obj;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}
