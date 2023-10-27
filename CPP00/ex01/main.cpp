#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(int argc, char *argv[])
{
	PhoneBook PB;
	int index = 0;
	std::string input;
	
	while (!std::cin.eof())
	{
		std::cout << "Enter one of the following commands: ADD, SEARCH or EXIT" << std::endl;
		std::getline(std::cin, input);

		if (input == "ADD")
		{
			if (index == 8)
				index = 0;
			PB.addContact(index);
			index++;
			if (std::cin.eof())
				std::cout << std::endl;
		}
		else if (input == "SEARCH")
		{
			PB.displayPB(PB.getContacts());
		}
		else if (input == "EXIT")
			break;
		else
			if (!std::cin.eof())
				std::cout << "You can only use three commands: ADD SEARCH and EXIT.\n";
	}
	return 0;
}