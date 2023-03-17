#include "RPN.hpp"

int main (int ac, char **av) {
	if(ac == 2) {
		std::string arg(av[1]);
		RPN calculator;
		calculator.RPNcalculator(arg);
	}
	else
		std::cout << "Usage : ./RPN  < RPN mathematical expression >" << std::endl;
}