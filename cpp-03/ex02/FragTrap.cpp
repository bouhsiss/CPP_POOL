#include"FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	std::cout << "FragTrap has been constructed." << std::endl;
	this->Name = "";
	this->HitPoints = 100;
	this->EnergyPoints = 100;
	this->AttackDamage = 30;
}

FragTrap::FragTrap(std::string Name) : ClapTrap(Name){
	std::cout << "FragTrap " << Name << " has been constructed." << std::endl;
	this->HitPoints = 100;
	this->EnergyPoints = 100;
	this->AttackDamage = 30;
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

void FragTrap::attack(const std::string& target) {
	if(EnergyPoints){
		std::cout << "FragTrap " << target << " has been striked by FragTrap " << Name 
		<< ", causing " << AttackDamage << " points of damage!" << std::endl;
		EnergyPoints--;
	}
	else{
		std::cout << "FragTrap " << Name << " doesn't have enough energy points to attack." 
			<< std::endl; 
	}
}

void FragTrap::beRepaired(unsigned int amount) {
	ClapTrap::beRepaired(amount);
}

void FragTrap::takeDamage(unsigned int amount) {
	ClapTrap::takeDamage(amount);
}

void FragTrap::highFiveGuys(void){
	std::cout << Name <<  " ---> i kinda wanna high five guys :(" << std::endl;
}