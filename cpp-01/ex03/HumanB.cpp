#include"HumanB.hpp"

HumanB::HumanB(std::string name) : name(name){}

HumanB::~HumanB(){}

void HumanB::attack(){
	if(!this->WeaponPtr)
		std::cout  << this->name << " attacks with their hands, you need to set him a weapon :( " << std::endl;
	else
		std::cout << this->name << " attacks with their " << (*WeaponPtr).getType() << std::endl;
}

void HumanB::setWeapon(Weapon &Weaponref) {
	this->WeaponPtr = &Weaponref;
}