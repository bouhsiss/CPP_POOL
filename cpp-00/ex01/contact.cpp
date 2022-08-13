#include "contact.hpp"

std::string Contact::GetFirstName(void) const{
	return(this->FirstName);
}


std::string Contact::GetLastNAme(void) const{
	return(this->LastName);
}


std::string Contact::GetNickname(void) const{
	return(this->Nickname);
}


std::string Contact::GetPhoneNumber(void) const{
	return(this->PhoneNumber);
}


std::string Contact::GetDarkestSecret(void) const{
	return(this->DarkestSecret);
}

Contact::~Contact(){
	return;
}

Contact::Contact(){
	return;
}

Contact::Contact(std::string info[]){
	this->FirstName = info[0];
	this->LastName = info[1];
	this->Nickname = info[2];
	this->PhoneNumber = info[3];
	this->DarkestSecret = info[4];
}