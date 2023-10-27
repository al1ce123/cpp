#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

//setters
void Contact::setIndex(int index)
{
	this->_index = index;
}

void Contact::setPhoneNumber(std::string phone)
{
	this->_phoneNumber = phone;
}

void Contact::setFirstName(std::string fname)
{
	this->_firstName = fname;
}

void Contact::setLastName(std::string lname)
{
	this->_lastName = lname;
}

void Contact::setNickName(std::string nname)
{
	this->_nickName = nname;
}

void Contact::setDarkestSecret(std::string secret)
{
	this->_darkestSecret = secret;
}

//getters
int Contact::getIndex(void) const
{
	return this->_index;
}

std::string Contact::getPhoneNumber(void) const
{
	return this->_phoneNumber;
}

std::string Contact::getFirstName(void) const
{
	return this->_firstName;
}

std::string Contact::getLastName(void) const
{
	return this->_lastName;
}

std::string Contact::getNickName(void) const
{
	return this->_nickName;
}

std::string Contact::getDarkestSecret(void) const
{
	return this->_darkestSecret;
}

void Contact::displayContact(int _index, std::string _firstname, std::string _lastname, std::string _nickname)
{
	int firstnameLen = _firstname.size();
	int lastnameLen = _lastname.size();
	int nicknameLen = _nickname.size();
	int cpt = 0;

	std::cout << "|";
	std::cout << "         " << _index;
	std::cout << "|";

	if (firstnameLen > 10)
	{
		std::cout << _firstname.substr(0, 9);
		std::cout << ".";
	}
	else
	{
		while (cpt < (10 - firstnameLen))
		{
			std::cout << " ";
			cpt++;
		}
		std::cout << _firstname;
	}
	cpt = 0;
	std::cout << "|";

	if (lastnameLen > 10)
	{
		std::cout << _lastname.substr(0, 9);
		std::cout << ".";
	}
	else
	{
		while (cpt < (10 - lastnameLen))
		{
			std::cout << " ";
			cpt++;
		}
		std::cout << _lastname;
	}
	cpt = 0;
	std::cout << "|";

	if (nicknameLen > 10)
	{
		std::cout << _nickname.substr(0, 9);
		std::cout << ".";
	}
	else
	{
		while (cpt < (10 - nicknameLen))
		{
			std::cout << " ";
			cpt++;
		}
		cpt = 0;
		std::cout << _nickname;
	}
	std::cout << "|" << std::endl;
}