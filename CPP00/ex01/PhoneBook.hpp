#pragma once

# include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();

		void displayPB(Contact _contacts[8]) const;
		void addContact(int index);
		Contact* getContacts();

	private:
		Contact _contacts[8];
};
