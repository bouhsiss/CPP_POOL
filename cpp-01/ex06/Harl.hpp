#ifndef HARL_FILTER_HPP
#define HARL_FILTER_HPP

#include<iostream>
#include<string>

class Harl{
	public :
		Harl();
		~Harl();
		void complain(std::string level);
	private :
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};


typedef void (Harl::*FunctionsPtrs)(void);

#endif