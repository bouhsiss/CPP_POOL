#include "BitcoinExchange.hpp"

int main(int ac, char **av) {
	if(ac == 2) {
		std::string arg(av[1]);
		BitcoinExchange hehe;
		// std::map<std::string, float>::iterator itr;
		// for(itr = hehe.btcPriceAndDate.begin(); itr != hehe.btcPriceAndDate.end(); itr++)
		// 	std::cout << "key : " << itr->first << " value : " << itr->second << std::endl;
		// std::map<std::string, float>::iterator It = hehe.btcPriceAndDate.find("2022-01-10");
		// if(It != hehe.btcPriceAndDate.end())
		// 	std::cout << "the price at that date is : " << It->second << std::endl;
		// else {
		// 	It = hehe.btcPriceAndDate.upper_bound("2022-01-10");
		// 	It--;
		// 	std::cout << "the price was not found here's the nearest lowest price " << It->second  << "on " << It->first << std::endl;
		// }
		hehe.btcCalculator(arg);
	}
	else
		std::cout << "Usage : ./btc < .csv file >" << std::endl;
}