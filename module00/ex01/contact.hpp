#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <string>

class Contact
{
	private:
			std::string _firstname;
			std::string _lastname;
			std::string _nickname;
			std::string _number;
			std::string _secret;
	public:
			Contact();
			~Contact();
			void setName(std::string name);
			void setLastname(std::string name);
			void setNick(std::string name);
			void setNumber(std::string number);
			void setSecret(std::string secret);
			std::string	getName();
			std::string	getLastname();
			std::string	getNick();
			std::string	getNumber();
			std::string	getSecret();
};

#endif