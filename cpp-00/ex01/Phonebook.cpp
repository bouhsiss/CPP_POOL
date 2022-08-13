#include "Phonebook.hpp"

Contact PhoneBook::SetInfos(){
	std::string tmp[5];

	std::cout <<  "*=================================================*" << std::endl;
	std::cout << "Please enter the required contact's informations !!" << std::endl;
	std::cout << "First name :" << std::endl;
	std::cin.ignore(10000,'\n');
	getline(std::cin, tmp[0]);
	std::cout << "Last name :" << std::endl;
	getline(std::cin, tmp[1]);
	std::cout << "Nickname :" << std::endl;
	getline(std::cin, tmp[2]);
	std::cout << "Phone number :" << std::endl;
	getline(std::cin, tmp[3]);
	std::cout << "Darkest secret :" << std::endl;
	getline(std::cin, tmp[4]);
	std::cout <<  "*=================================================*" << std::endl;

	Contact ContactInstance(tmp);
	return(ContactInstance);
}


void PhoneBook::DisplayHeader(){
	std::cout <<  "*===========================================*" << std::endl;
	std::cout <<  "|          |          |          |          |" << std::endl;
	std::cout <<  "|     index|first name| last name|  nickname|" << std::endl;
	std::cout <<  "|          |          |          |          |" << std::endl;
	std::cout <<  "*===========================================*" << std::endl;
}

std::string truncate(std::string string){
	if(string.length() > MAX_WIDTH)
		return(string.substr(0, 9) + ".");
	return(string);
}

void PhoneBook::DisplayContact(int index)
{
	std::cout << "|" << std::right << std::setw(10) << index ;
	std::cout << "|" << std::right << std::setw(10) << truncate(this->Contacts[index].GetFirstName());
	std::cout << "|" << std::right << std::setw(10) << truncate(this->Contacts[index].GetLastNAme());
	std::cout << "|" << std::right << std::setw(10) << truncate(this->Contacts[index].GetNickname()) << "|" << std::endl;
}

void PhoneBook::SearchContact(){
	int index = -1;
	this->DisplayHeader();
	while(++index < ContactsNumber)
		DisplayContact(index);
	std::cout <<  "*===========================================*" << std::endl;
	std::cout << "which contact you would like to see ?" << std::endl;
	if (!(std::cin >> index) || index < 1 || index > this->ContactsNumber)
	{
		std::cout << "Error, please enter a valid index :";
		std::cin.clear();
		std::cin.ignore(10000,'\n');
	}
	std::cout << "First name :" << this->Contacts[index].GetFirstName() << std::endl;
	std::cout << "Last name :" << this->Contacts[index].GetLastNAme() << std::endl;
	std::cout << "Nickname :" << this->Contacts[index].GetNickname() << std::endl;
	std::cout << "Phone number :" << this->Contacts[index].GetPhoneNumber() << std::endl;
	std::cout << "Darkest secret :" << this->Contacts[index].GetDarkestSecret() << std::endl;
}

PhoneBook::PhoneBook(){
	this->ContactsNumber = 0;
	this->oldest = 0;
}

PhoneBook::~PhoneBook(){
	return ;
}


void PhoneBook::AddContact(){

	if (this->ContactsNumber == MAX_CONTACTS){
		std::cout << "PhoneBook is full... Oldest contact would be replaced by the new one" << std::endl;
		this->Contacts[oldest] = this->SetInfos();
		if (this->oldest == 7)
			this->oldest = 0;
		else
			this->oldest++;
	}
	else {
		this->Contacts[this->ContactsNumber] = this->SetInfos();
		this->ContactsNumber++;
	}
}