#ifndef CONTACT_CLASS_HPP
#define  CONTACT_CLASS_HPP

#pragma once
#include <iostream>


class Contact {
	public :
		Contact(){};
		~Contact(){};
		void SetFirstName(std::string FirstName);
		std::string GetFirstName(void) const;
		void SetLastName(std::string LastNAme);
		std::string GetLastNAme(void) const;
		void SetNickname(std::string Nickname);
		std::string GetNickname(void) const;
		void SetPhoneNumber(std::string PhoneNumber);
		std::string GetPhoneNumber(void) const;
		void SetDarkestSecret(std::string DarkesrSecret);
		std::string GetDarkestSecret(void) const;
		
	private :
		std::string FirstName;
		std::string LastName;
		std::string Nickname;
		std::string	PhoneNumber;
		std::string DarkestSecret;
};

#endif