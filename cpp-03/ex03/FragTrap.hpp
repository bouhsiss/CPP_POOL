#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include"ClapTrap.hpp"

class FragTrap :virtual public ClapTrap{
	public :
		FragTrap();
		FragTrap(std::string);
		FragTrap& operator=(const FragTrap&);
		FragTrap(const FragTrap&);
		~FragTrap();
		void attack(const std::string&);
		void takeDamage(unsigned int);
		void beRepaired(unsigned int);
		void highFiveGuys(void);
};

#endif