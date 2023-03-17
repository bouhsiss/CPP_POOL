#include "BitcoinExchange.hpp"

int main(int ac, char **av) {
	if(ac == 2) {
		std::string arg(av[1]);
		BitcoinExchange calculator;
		calculator.btcCalculator(arg);
	}
	else
		std::cout << "Usage : ./btc   < .csv file >" << std::endl;
}