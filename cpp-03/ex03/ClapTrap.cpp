#include"ClapTrap.hpp"

ClapTrap::ClapTrap(){}

ClapTrap::ClapTrap(std::string Name): Name(Name), HitPoints(100), EnergyPoints(50), AttackDamage(20){
	std::cout << "ClapTrap parameterized constructor called" << std::endl;
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
		std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " <<  AttackDamage << " points of damage!" << std::endl;
		EnergyPoints--;
	}
	else{
		std::cout << "ClapTrap " << Name << " doesn't have enough energy points to attack." << std::endl; 
	}
}

void ClapTrap::takeDamage(unsigned int amount){
	if(HitPoints >= amount){
		std::cout << "ClapTrap " << Name << " takes Damage, causing " << amount << " Hit points loss." << std::endl;
		HitPoints -= amount;
	}
	else{
		std::cout << "ClapTrap " << Name << " doesn't have enough hit points to take " << amount << " damage." << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount){
	if(EnergyPoints){
		std::cout << "ClapTrap " << Name << " repairs himself, gaining " << amount << " Hit points." << std::endl;
		HitPoints += amount;
	}
	else{
		std::cout << "ClapTrap " << Name << " doesn't have enough energy points to repair himself." << std::endl;
	}
}

std::string ClapTrap::getName(void) const{
	return(Name);
}

unsigned int ClapTrap::getHitPoints(void) const{
	return(HitPoints);
}

unsigned int ClapTrap::getEnergyPoints(void) const{
	return(EnergyPoints);
}

unsigned int ClapTrap::getAttackDamage(void) const{
	return(AttackDamage);
}
