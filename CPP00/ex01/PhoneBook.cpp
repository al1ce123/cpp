#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
}

PhoneBook::~PhoneBook(void)
{
}

Contact* PhoneBook::getContacts()
{
	return this->_contacts;
}

void PhoneBook::addContact(int index)
{
	std::string fname;
	std::string lname;
	std::string nname;
	std::string phone;
	std::string secret;

	while(true)
	{
		std::cout << "Enter first name: ";
		std::getline(std::cin, fname);
		if (std::cin.eof())
			return ;
		if (!fname.empty())
			break;
		else
			std::cout << "You didn't entered anything. Please try again." << std::endl;
	}

	while (true)
	{
		std::cout << "Enter last name: ";
		std::getline(std::cin, lname);
		if (std::cin.eof())
			return ;
		if (!lname.empty())
				break;
			else
				std::cout << "You didn't entered anything. Please try again." << std::endl;
	}

	while (true)
	{
		std::cout << "Enter nick name: ";
		std::getline(std::cin, nname);
		if (std::cin.eof())
			return ;
		if (!nname.empty())
				break;
		else
			std::cout << "You didn't entered anything. Please try again." << std::endl;
	}

	while (true)
	{
		std::cout << "Enter phone numer: ";
		std::getline(std::cin, phone);
		if (std::cin.eof())
			return ;
		if (!phone.empty())
				break;
		else
			std::cout << "You didn't entered anything. Please try again." << std::endl;
	}

	while (true)
	{
		std::cout << "Enter drakest secret: ";
		std::getline(std::cin, secret);
		if (std::cin.eof())
			return ;
		if (!secret.empty())
				break;
		else
			std::cout << "You didn't entered anything. Please try again." << std::endl;
	}

	_contacts[index].setIndex(index + 1);
	_contacts[index].setFirstName(fname);
	_contacts[index].setLastName(lname);
	_contacts[index].setNickName(nname);
	_contacts[index].setPhoneNumber(phone);
	_contacts[index].setDarkestSecret(secret);
}

void PhoneBook::displayPB(Contact _contacts[8]) const
{
	int index = 0;
	std::string str;

	if (_contacts[0].getIndex() == 0)
	{
		std::cout << "Sorry but the phonebook is empty." << std::endl;
		return;
	}
	for (int i = 0; i < 8; i++)
	{
		_contacts[i].displayContact(_contacts[i].getIndex(), _contacts[i].getFirstName(), _contacts[i].getLastName(), _contacts[i].getNickName());
	}
	std::cout << "Which contact's personal informations would you like to see :) ?" << std::endl;
	std::cout << "Enter its index: ";
	if (!std::getline(std::cin, str) || str.empty())
	{
		std::cout << "\n";
		return;
	}
	index = std::stoi(str);
	if (index > 0 && index < 9)
	{
		if ((index) == _contacts[index - 1].getIndex())
		{
			std::cout << "first name: " << _contacts[index - 1].getFirstName() << std::endl;
			std::cout << "last name: " << _contacts[index - 1].getLastName() << std::endl;
			std::cout << "nick name: " << _contacts[index - 1].getNickName() << std::endl;
			std::cout << "phone number: " << _contacts[index - 1].getPhoneNumber() << std::endl;
			std::cout << "darkest secret: " << _contacts[index - 1].getDarkestSecret() << std::endl;
		}
		else
		{
			std::cout << "The contact doesn't exists yet :( " << std::endl;
		}

	}
	else
	{
		std::cout << "You have to enter a value between one and eight." << std::endl;
	}
}

