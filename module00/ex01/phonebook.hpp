#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <string>
# include "contact.hpp"

using namespace std;
class Phonebook
{
private:
			// string m_name;
		Contact	client;
public:
		Phonebook();
		~Phonebook();
		void newContact();
		void printContact();
};


#endif