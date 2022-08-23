#include"Harl.hpp"

int main(int ac, char **av){
	Harl Harl;

	if(ac == 2){		
		std::string arg(av[1]);	
		Harl.complain(arg);
	}
	else
		std::cout << "Usage: ./HarlFilter [ LEVEL ]" << std::endl;
}

