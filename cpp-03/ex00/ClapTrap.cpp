#include"ClapTrap.hpp"

ClapTrap::ClapTrap() : HitPoints(10), EnergyPoints(10), AttackDamage(0){
	std::cout << "ClapTrap has been constructed" << std::endl;
	Name = "";
}

ClapTrap::ClapTrap(std::string Name): Name(Name), HitPoints(10), EnergyPoints(10), AttackDamage(0){
	std::cout << "ClapTrap " << Name << " has been constructed" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& obj){
	std::cout << "ClapTrap Assignment operator called" << std::endl; 
	this->Name = obj.Name;
	this->HitPoints = obj.HitPoints;
	this->EnergyPoints = obj.EnergyPoints;
	this->AttackDamage = obj.AttackDamage;
	return(*this);
}

ClapTrap::ClapTrap(const ClapTrap& obj){
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = obj;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap " << Name << " has been destructed" << std::endl;
}

void ClapTrap::attack(const std::string& target){
	if(EnergyPoints){
		std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " 
			<<  AttackDamage << " points of damage!" << std::endl;
		EnergyPoints--;
	}
	else{
		std::cout << "ClapTrap " << Name << " doesn't have enough energy points to attack." 
			<< std::endl; 
	}
}

void ClapTrap::takeDamage(unsigned int amount){
	if(HitPoints >= amount){
		std::cout << "ClapTrap " << Name << " takes Damage, causing " << amount << " Hit points loss." 
			<< std::endl;
		HitPoints -= amount;
	}
	else{
		std::cout << "ClapTrap " << Name << " doesn't have enough hit points to take " << amount 
			<< " damage." << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount){
	if(EnergyPoints){
		std::cout << "ClapTrap " << Name << " repairs himself, gaining " << amount << " Hit points." 
			<< std::endl;
		HitPoints += amount;
	}
	else{
		std::cout << "ClapTrap " << Name << " doesn't have enough energy points to repair himself." 
			<< std::endl;
	}
}

std::string ClapTrap::getName(void) const{ return(Name); }

unsigned int ClapTrap::getHitPoints(void) const{ return(HitPoints); }

unsigned int ClapTrap::getEnergyPoints(void) const{ return(EnergyPoints); }

unsigned int ClapTrap::getAttackDamage(void) const{ return(AttackDamage); }

std::ostream& operator<<(std::ostream& os, const ClapTrap& obj) {
	std::cout << "[#### ClapTrap robot ####]" << std::endl;
	os << "ClapTrap name : " << obj.getName() << std::endl;
	os << "ClapTrap HitPoints : " << obj.getHitPoints() << std::endl;
	os << "ClapTrap EnergyPoints : " << obj.getEnergyPoints() << std::endl;
	os << "ClapTrap AttackDamage : " << obj.getAttackDamage() << std::endl;
	return(os);
}