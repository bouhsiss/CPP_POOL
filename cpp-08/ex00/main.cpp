#include "easyfind.hpp"

int main() {
	std::vector<int> IntVect;
	std::vector<int>::iterator ret;

	std::cout << "# TESTING WITH INT VECTOR #" << std::endl;
	for (int i = 0; i < 5; i++)
		IntVect.push_back(i);
	try {
		ret = easyfind<std::vector<int> , int>(IntVect, 5);
		std::cout << "element found : " << *ret << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		ret = easyfind<std::vector<int> , int>(IntVect, 4);
		std::cout << "element found : " << *ret << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "# TESTING WITH STRING LIST #" << std::endl;
	std::list<std::string> StringList;
	std::list<std::string>::iterator ret_2;

	for(int i = 0; i < 10; i++)
		StringList.push_back("test_" + std::to_string(i));
	try {
		ret_2 = easyfind<std::list<std::string>, std::string >(StringList, "test_11");
		std::cout << "element found : " << *ret_2 << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		ret_2 = easyfind<std::list<std::string>, std::string >(StringList, "test_6");
		std::cout << "element found : " << *ret_2 << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}