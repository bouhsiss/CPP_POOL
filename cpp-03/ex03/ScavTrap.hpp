#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include"ClapTrap.hpp"

class ScavTrap :virtual public ClapTrap{
	public :
		ScavTrap();
		ScavTrap(std::string);
		ScavTrap& operator=(const ScavTrap&);
		ScavTrap(const ScavTrap&);
		~ScavTrap();
		void attack(const std::string&);
		void takeDamage(unsigned int);
		void beRepaired(unsigned int);
		void guardGate();
};


#endif