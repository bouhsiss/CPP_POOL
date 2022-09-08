#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include"FragTrap.hpp"
#include"ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap{
	public :
		DiamondTrap();
		DiamondTrap(std::string);
		DiamondTrap& operator=(const DiamondTrap&);
		DiamondTrap(const DiamondTrap&);
		~DiamondTrap();
		void attack(const std::string&);
		void beRepaired(unsigned int);
		void takeDamage(unsigned int);
		void whoAmI();
	private :
		std::string Name;
};

#endif