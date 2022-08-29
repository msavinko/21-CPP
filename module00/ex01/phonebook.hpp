#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <string>
# include "contact.hpp"

using namespace std;
class Phonebook
{
	private:
			Contact	client[3]; // change the number of contacts to 8!!!!
			//int index;
	public:
			Phonebook();
			~Phonebook();
			void newContact(int index);
			void printContact(int index);
};


#endif