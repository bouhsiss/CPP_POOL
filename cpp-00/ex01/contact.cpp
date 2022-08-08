#include "contact.hpp"

void Contact::SetFirstName(std::string FirstName){
	this->FirstName = FirstName;
}
std::string Contact::GetFirstName(void) const{
	return(this->FirstName);
}


void Contact::SetLastName(std::string LastName){
	this->LastName = LastName;
}
std::string Contact::GetLastNAme(void) const{
	return(this->LastName);
}


void Contact::SetNickname(std::string Nickname){
	this->Nickname = Nickname;
}
std::string Contact::GetNickname(void) const{
	return(this->Nickname);
}


void Contact::SetPhoneNumber(std::string PhoneNumber){
	this->PhoneNumber = PhoneNumber;
}
std::string Contact::GetPhoneNumber(void) const{
	return(this->PhoneNumber);
}


void Contact::SetDarkestSecret(std::string DarkestSecret){
	this->DarkestSecret = DarkestSecret;
}
std::string Contact::GetDarkestSecret(void) const{
	return(this->DarkestSecret);
}

