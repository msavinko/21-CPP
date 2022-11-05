#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# include <iostream>

class PhoneBook
{
private:

	static const int 	_maxContacts = 8;
	static const int	_fieldNumber = 5;
	Contact				_contacts[_maxContacts];
	int					_index;
	int					_totalContacts;
	void				_incrementIndex( void );
	void				_fillContact( const std::string str[_fieldNumber] );
	void				_displayField( const std::string field) const;
	
public:

	PhoneBook( void );
	~PhoneBook( void );

	void	setContact( void );
	void	getContact( void ) const ;

};

#endif
