#include"Fixed.hpp"

int main(){
	Fixed instance(2);
	Fixed instance1(2);
	
	std::cout << instance + instance1 << std::endl;
	std::cout << instance - instance1 << std::endl;
	std::cout << instance * instance1 << std::endl;
	std::cout << instance / instance1 << std::endl;

}