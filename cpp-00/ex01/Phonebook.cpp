#include "Phonebook.hpp"

void PhoneBook::SetInfos(int index){
	std::string tmp;

	std::cout << "Please enter the required contact's informations !!" << std::endl;
	std::cout << "First name :" << std::endl;
	std::cin >> tmp;
	Contacts[index].SetFirstName(tmp);
	std::cout << "Last name :" << std::endl;
	std::cin >> tmp;
	Contacts[index].SetLastName(tmp);
	std::cout << "Nickname :" << std::endl;
	std::cin >> tmp ;
	Contacts[index].SetNickname(tmp);
	std::cout << "Phone number :" << std::endl;
	std::cin >> tmp;
	Contacts[index].SetPhoneNumber(tmp);
	std::cout << "Darkest secret :" << std::endl;
	std::cin >> tmp;
	Contacts[index].SetDarkestSecret(tmp);
}