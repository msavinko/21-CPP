/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 13:57:47 by aseptimu          #+#    #+#             */
/*   Updated: 2022/04/24 14:02:41 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
