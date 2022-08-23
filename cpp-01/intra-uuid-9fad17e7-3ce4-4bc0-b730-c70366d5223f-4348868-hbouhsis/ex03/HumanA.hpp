#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include<iostream>
#include"Weapon.hpp"

class HumanA{
	private :
		std::string name;
		Weapon &WeaponRef;
	public :
		HumanA(std::string name, Weapon &WeaponRef);
		~HumanA();
		void attack();
};


#endif