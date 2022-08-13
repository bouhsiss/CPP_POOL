#ifndef CONTACT_CLASS_HPP
#define  CONTACT_CLASS_HPP

#include <iostream>
#include <iomanip>
#include <limits>
 

class Contact {
	public :
		Contact();
		Contact(std::string info[]);
		~Contact();
		std::string GetFirstName(void) const;
		std::string GetLastNAme(void) const;
		std::string GetNickname(void) const;
		std::string GetPhoneNumber(void) const;
		std::string GetDarkestSecret(void) const;
		
	private :
		std::string FirstName;
		std::string LastName;
		std::string Nickname;
		std::string	PhoneNumber;
		std::string DarkestSecret;
};

#endif