#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

#include "contact.hpp"
#pragma once

#define MAX_CONTACTS 8
#define MAX_WIDTH 10

class PhoneBook {
	public :
		PhoneBook();
		~PhoneBook();
		void AddContact();
		void SearchContact(void);
	private :
		void DisplayPhoneBook();
		void DisplayContact(int index);
		Contact Contacts[8];
		Contact SetInfos();
		void DisplayHeader();
		int ContactsNumber;
		int	oldest;
};

#endif