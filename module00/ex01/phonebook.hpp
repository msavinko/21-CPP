#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <string>
# include "contact.hpp"

using namespace std;

class Phonebook
{
	private:
			Contact	contact[8];
			void printContact(int index);
			string fillBook(string text);
			int chooseContact();
			void printName(string name);
	public:
			Phonebook();
			~Phonebook();
			void newContact(int index);
			void searchContact();
};

#endif