#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>

class Contact
{
private:
	
	std::string	_firstName;
	std::string	_lastName;
	std::string _nickName;
	std::string _phoneNumber;
	std::string _darkestSecret;

public:

	Contact( void );
	~Contact( void );

	std::string getFirstName() const;
	void setFirstName(const std::string &firstName);

	std::string getLastName() const;
	void setLastName(const std::string &lastName);

	std::string getNickName() const;
	void setNickName(const std::string &nickName);

	std::string getPhoneNumber() const;
	void setPhoneNumber(const std::string &phoneNumber);

	std::string getDarkestSecret() const;
	void setDarkestSecret(const std::string &darkestSecret);

};


#endif
