#include"Harl.hpp"

int main(int ac, char **av){
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int test = -1;
	Harl Harl;

	if(ac == 2){		
		std::string arg(av[1]);	
		for(int i = 0; i < 4; i++){
			if(arg == levels[i]){
				test = i;
				break;
			}
		}
		switch(test){
			case 0 :
				Harl.complain("DEBUG");
			case 1 :
				Harl.complain("INFO");
			case 2 :
				Harl.complain("WARNING");
			case 3 :
				Harl.complain("ERROR");
				break;
			default :
				std::cout << "THIS LEVEL IS NOT AVAILABLE I GUESS..." << std::endl;
		}
	}
	else
		std::cout << "Usage: ./HarlFilter [ LEVEL ]" << std::endl;
}

