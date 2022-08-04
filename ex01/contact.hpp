#ifndef CONTACT_CLASS_HPP
#define  CONTACT_CLASS_HPP

#include<iostream>

class Contact {
	public :
		Contact(){};
		~Contact(){};
		void SetInfos(std::string Fn,std::string Ln, std::string Nn, std::string Pn, std::string Ds);
		void PrintContact(void);
	private :
		std::string FirstName;
		std::string LastName;
		std::string Nickname;
		std::string	PhoneNumber;
		std::string DarkestSecret;
};

#endif