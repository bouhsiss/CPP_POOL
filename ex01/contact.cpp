#include"contact.hpp"

void Contact::AddContact(void)
{
	std::cout << "Enter contact details " << std::endl;
	std::cout << "First name :" << std::endl;
	std::cin >> FirstName;
	std::cout << FirstName << std::endl; 
	std::cout << "Last name :" << std::endl;
	std::cin >> LastName;
	std::cout << LastName << std::endl;
	std::cout << "Nickname :" << std::endl;
	std::cin >> Nickname;
	std::cout << Nickname << std::endl;
	std::cout << "Phone number :" << std::endl;
	std::cin >> PhoneNumber;
	std::cout << PhoneNumber << std::endl;
	std::cout << "Darkest secret :" << std::endl;
	std::cin >> DarkestSecret;
	std::cout << DarkestSecret << std::endl;
}