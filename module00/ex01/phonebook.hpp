#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <string>
# include "contact.hpp"

using namespace std;
class Phonebook
{
	private:
			Contact	client[8];
	public:
			Phonebook();
			~Phonebook();
			void newContact(int index);
			void printContact(int index);
			void searchContact();
			string fillBook(string text);
			int chooseContact();
			void printName(string name);
};

#endif