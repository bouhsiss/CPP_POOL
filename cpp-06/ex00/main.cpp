#include "convertTools.hpp"


int main(int ac, char **av) {
	if (ac == 2) {
		std::cout.precision(1);
		std::cout << std::fixed;
		std::string str = std::string(av[1]);
		convertToChar(str);
		convertToInt(str);
		convertToFloat(str);
		convertToDouble(str);
	}
}