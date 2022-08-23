#include<iostream>

int main(){
	std::string initialString = "HI THIS IS BRAIN";
	std::string *stringPTR = &initialString;
	std::string &stringREF = initialString;

	std::cout << "Printing the memory address... " << std::endl;
	std::cout <<"of the string variable : " <<  &initialString << std::endl;
	std::cout << "held by stringPTR : " << stringPTR << std::endl;
	std::cout << "held by stringREF : " << &stringREF << std::endl << std::endl;

	std::cout << "Printing the value..." << std::endl;
	std::cout << "of the string variable : " << initialString << std::endl;
	std::cout << "pointed to by stringPTR : " << (*stringPTR) << std::endl;
	std::cout << "pointed to by stringREF : " << stringREF << std::endl;

}