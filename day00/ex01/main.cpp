#include <iostream>
#include <string>
#include "phonebook.hpp"

int main(void)
{
	std::string command;
	Phonebook book;
	int index = 0;
	std::cout << "Enter your command (ADD, SEARCH or EXIT): ";
	std::getline(std::cin, command);
	while (command != "EXIT")
	{
		if (command == "ADD"){
			if (index == 8)
				index = 0;
			book.newContact(index++);
		}else if (command == "SEARCH"){
			book.searchContact();
		}else
			std::cout << "Such command does not exist, please, try again\n" << std::endl;
		std::cout << "Enter your command (ADD, SEARCH or EXIT): ";
		std::getline(std::cin, command);
	}
	std::cout << "\n   ~~~ You exit the phonebook ~~~   \n" << std::endl;
	return (0);
}