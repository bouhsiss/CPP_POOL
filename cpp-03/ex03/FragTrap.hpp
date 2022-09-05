#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include"ClapTrap.hpp"

class FragTrap : virtual  public ClapTrap{
	public :
		FragTrap(std::string);
		FragTrap& operator=(const FragTrap&);
		FragTrap(const FragTrap&);
		~FragTrap();
		void highFiveGuys(void);
	private :
		FragTrap();
};

#endif