#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <string>

using namespace std;
class Contact
{
	private:
			string _firstname;
			string _lastname;
			string _nickname;
			string _number;
			string _secret;
	public:
			Contact();
			~Contact();
			void setName(string name);
			void setLastname(string name);
			void setNick(string name);
			void setNumber(string number);
			void setSecret(string secret);
			string	getName(){return this->_firstname;};
			string	getLastname(){return this->_lastname;};
			string	getNick(){return this->_nickname;};
};

#endif