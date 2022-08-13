#include "Phonebook.hpp"

int main(){
	PhoneBook book;
	std::string command;

	std::cout << "Enter one of the commands below :" << std::endl;
	std::cout << "    *  ADD   *   " << std::endl;
	std::cout << "    * SEARCH *   " << std::endl;
	std::cout << "    *  EXIT  *   " << std::endl;
	while(1)
	{
		std::cin >> command;
		if (command == "ADD")
			  book.AddContact();
		else if(command == "SEARCH")
			book.SearchContact();
		else if(command == "EXIT")
			return(EXIT_SUCCESS);
		else
			std::cout << "Please enter a valid command" << std::endl;
	}
}