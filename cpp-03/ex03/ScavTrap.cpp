#include"ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(){
	std::cout << "ScavTrap has been constructed." << std::endl;
	this->Name = "";
	this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
}

ScavTrap::ScavTrap(std::string NameVal) : ClapTrap(NameVal){
	std::cout << "ScavTrap " << NameVal << " has been constructed." << std::endl;
	this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
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
	std::cout << "ScavTrap has been destructed " << std::endl;
}


void ScavTrap::attack(const std::string& target) {
	if(EnergyPoints){
		std::cout << "ScavTrap " << target << " has been striked by ScavTrap " << Name 
		<< ", causing " << AttackDamage << " points of damage!" << std::endl;
		EnergyPoints--;
	}
	else{
		std::cout << "ScavTrap " << Name << " doesn't have enough energy points to attack." 
			<< std::endl; 
	}
}

void ScavTrap::beRepaired(unsigned int amount) {
	ClapTrap::beRepaired(amount);
}

void ScavTrap::takeDamage(unsigned int amount) {
	ClapTrap::takeDamage(amount);
}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap "<< Name <<" is now in Gate keeper mode." << std::endl;
}
