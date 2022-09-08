#include"DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : FragTrap() , ScavTrap(){
	std::cout << "DiamondTrap has been constructed" << std::endl;
}

DiamondTrap::DiamondTrap(std::string Name) : ClapTrap(Name + "_clap_name") , FragTrap(Name), ScavTrap(Name) {
	std::cout << "DiamondTrap " << Name << " has been constructed" << std::endl;
	this->Name = Name;
	this->HitPoints = FragTrap::getHitPoints();
	this->EnergyPoints = ScavTrap::getEnergyPoints();
	this->AttackDamage = FragTrap::getAttackDamage();
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& obj){
	std::cout << "DiamondTrap copy constructor called " << std::endl;
	Name = obj.getName();
	HitPoints = obj.getHitPoints();
	EnergyPoints = obj.getEnergyPoints();
	AttackDamage = obj.getAttackDamage();
	return(*this);
}

DiamondTrap::DiamondTrap(const DiamondTrap& obj) {
	std::cout << "DiamondTrap assignement operator called" << std::endl;
	*this = obj;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap has been destructed." << std::endl;
}

void DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack(target);
}

void DiamondTrap::beRepaired(unsigned int amount) {
	FragTrap::beRepaired(amount);
}

void DiamondTrap::takeDamage(unsigned int amount) {
	ScavTrap::takeDamage(amount);
}

void DiamondTrap::whoAmI() {
	std::cout << "My name is " << this->Name;
	std::cout << " My ClapTrap Name is " << ClapTrap::Name << std::endl;
}

