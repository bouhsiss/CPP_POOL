#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include<iostream>
#include<string>

class ClapTrap{
	public :
		ClapTrap();
		ClapTrap(std::string);
		ClapTrap& operator=(const ClapTrap&);
		ClapTrap(const ClapTrap&);
		~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string getName(void) const;
		unsigned int getHitPoints(void) const;
		unsigned int getEnergyPoints(void) const;
		unsigned int getAttackDamage(void) const;
	private :
		std::string Name;
		unsigned int HitPoints;
		unsigned int EnergyPoints;
		unsigned int AttackDamage;
};


std::ostream& operator<<(std::ostream& os, const ClapTrap&);

#endif