#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

#include "contact.hpp"
#pragma once


class PhoneBook {
	public :
		PhoneBook(){};
		~PhoneBook(){};
		int ContactNumber;
		void SetInfos(int index);
		void SearchContact(void);
	private :
		Contact Contacts[8];
};

#endif