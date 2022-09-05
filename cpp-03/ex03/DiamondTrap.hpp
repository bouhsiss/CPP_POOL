#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include"ScavTrap.hpp"
#include"FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap{
	public :
		DiamondTrap(std::string);
		// DiamondTrap& operator=(const DiamondTrap&);
		// DiamondTrap(const DiamondTrap&);
		// ~DiamondTrap();
		// void whoAmI();
	private :
		DiamondTrap();
		std::string name;
};

#endif