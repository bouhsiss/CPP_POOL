#include "convertTools.hpp"

void convertToChar(std::string str) {
	std::cout << "char: " ;
	if(!std::isdigit(str[0]) && str.length() == 1) {
		std::cout << str[0] << std::endl;
		return ;
	}
	try {
		int ret = std::stoi(str);
		if (ret < 0 || ret > 255)
			throw std::exception();
		else if(!std::isprint(ret))
			std::cout << "Non displayable" << std::endl;
		else
			std::cout << static_cast<char>(ret) << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << "Impossible." << std::endl;
	}
}

void convertToInt(std::string str) {
	std::cout << "Int: ";
	try {
		int ret = std::stoi(str);
		std::cout << static_cast<int>(ret) << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << "Impossible" << std::endl;
	}
}

void convertToFloat(std::string str) {
	std::cout << "float: ";
	try {
		float ret = std::stof(str);
		std::cout << static_cast<float>(ret) << "f"<< std::endl;
	}
	catch (const std::exception &e) {
		std::cout << "Impossible" << std::endl;
	}
}

void convertToDouble(std::string str) {
	std::cout << "double: ";
	try {
		double ret = std::stod(str);
		std::cout << static_cast<double>(ret) << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << "Impossible" << std::endl;
	}
}