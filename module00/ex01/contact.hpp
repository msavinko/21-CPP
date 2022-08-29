#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <string>

using namespace std;
class Contact
{
	private:
			string m_firstname;
			string m_lastname;
			string m_nickname;
			string m_number;
			string m_secret;
	public:
			Contact();
			~Contact();
			void setName(string name);
			void setLastname(string name);
			void setNick(string name);
			void setNumber(string number);
			void setSecret(string secret);
			string getName();
			string getLastname();
			string getNick();
			string getNumber();
			string getSecret();
};

#endif