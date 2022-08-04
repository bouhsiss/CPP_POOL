#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

#include"contact.hpp"

class PhoneBook {
	public :
		PhoneBook(){};
		~PhoneBook(){};
		void AddContact(void);
		void SearchContact(void);
	private :
		Contact Contacts[8];
};

#endif