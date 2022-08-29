#ifndef CONTACT_H
# define CONTACT_H

# include "phonebook.hpp"

using namespace std;
class Contact
{
private:
		string m_name;
public:
		Contact();
		~Contact();
		void setName(string name);
		string getName();
};

#endif