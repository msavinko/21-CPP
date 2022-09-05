#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <string>
# include <iomanip>
# include "contact.hpp"

class Phonebook
{
	private:
			Contact	contact[8];

			void printContacts(int index);
			void printContact(int index);
			std::string fillBook(std::string text);
			int chooseContact();
			void printName(std::string name);
	public:
			Phonebook();
			~Phonebook();
			void newContact(int index);
			void searchContact();
};

#endif