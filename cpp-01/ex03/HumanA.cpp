#include"HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weaponRef) : name(name) , WeaponRef(weaponRef) {}

HumanA::~HumanA(){}

void HumanA::attack(){
	std::cout << this->name << " attacks with their " << this->WeaponRef.getType() << std::endl;
}

