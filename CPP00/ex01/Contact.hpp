#pragma once

# include <iostream>
# include <string>

class Contact
{
	public:
		Contact();
		~Contact();

		void displayContact(int _index, std::string _firstname, std::string _lastname, std::string _nickname);

		void setIndex(int index);
		void setPhoneNumber(std::string phone);
		void setFirstName(std::string fname);
		void setLastName(std::string lname);
		void setNickName(std::string nname);
		void setDarkestSecret(std::string secret);

		int getIndex(void) const;
		std::string getPhoneNumber(void) const;
		std::string getFirstName(void) const;
		std::string getLastName(void) const;
		std::string getNickName(void) const;
		std::string getDarkestSecret(void) const; 


	private:
		int 		_index = 0;
		std::string	_phoneNumber;
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _darkestSecret; 
};
