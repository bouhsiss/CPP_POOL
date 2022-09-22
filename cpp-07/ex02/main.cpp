#include "Array.hpp"

int main() {

	//# DEEP COPY TESTS #

	Array<int> instance_1(7);
	instance_1.setArr(7);
	Array<int> instance_2 = instance_1;

	int *a = instance_2.getArr();
	std::cout << "          BEFORE CHANGING" << std::endl;
	for(int i = 0; i < 7; i++)
		std::cout << a[i] << std::endl;
	instance_1.setArr(6);
	std::cout << "         AFTER CHANGING" << std::endl;
	for(int i = 0; i < 7; i++)
		std::cout << a[i] << std::endl;
	// # OUT OF BONDS EXCEPTION #
	try {
		std::cout << "instance_2[7]  = " <<instance_2[7] << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << "index is out of bounds" << std::endl;
	}
	// # SIZE FUNCTION TEST #
	std::cout << instance_1.size() << std::endl;

	std::cout << std::endl << "=========== strings tests ===========" << std::endl << std::endl; 
	// # TESTS FOR STRINGS #
	Array<std::string> obj_1(7);
	obj_1.setArr("test");
	Array<std::string> obj_2 = obj_1;

	std::string *array = obj_2.getArr();
	std::cout << "       BEFORE CHANGING" << std::endl;
	for(int i = 0; i < 7; i++)
		std::cout << array[i] << std::endl;
	obj_1.setArr("hello");
	std::cout << "       AFTER CHANGING" << std::endl;
	for(int i = 0; i < 7; i++)
		std::cout << array[i] << std::endl;
	// # OUT OF BONDS EXCEPTION #
	try {
		std::cout <<"obj[6]  = " <<  obj_2[6] << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << "index is out of bounds" << std::endl;
	}
	// # SIZE FUNCTION TEST #
	std::cout << obj_1.size() << std::endl;
} 