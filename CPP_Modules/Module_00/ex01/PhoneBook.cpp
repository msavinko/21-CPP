/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 14:11:24 by aseptimu          #+#    #+#             */
/*   Updated: 2022/04/24 17:48:58 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook( void ) {
	_index = 0;
	_totalContacts = 0;
	return ;
}

PhoneBook::~PhoneBook( void ) {
	return ;
}

void	PhoneBook::setContact(void) {
	std::string str[_fieldNumber];

	std::cout << "Enter first name: ";
	std::cin >> str[0];
	if (std::cin.fail())
		exit(1); 
	std::cout << "Enter last name: ";
	std::cin >> str[1];
	if (std::cin.fail())
		exit(1); 
	std::cout << "Enter nickname: ";
	std::cin >> str[2];
	if (std::cin.fail())
		exit(1); 
	std::cout << "Enter phone number: ";
	std::cin >> str[3];
	if (std::cin.fail())
		exit(1); 
	std::cout << "Enter youre dark secret: ";
	std::cin >> str[4];
	if (std::cin.fail())
		exit(1);
	_fillContact(str);
	_incrementIndex();
}

void	PhoneBook::_fillContact(const std::string str[_fieldNumber]) {
	_contacts[_index].setFirstName(str[0]);
	_contacts[_index].setLastName(str[1]);
	_contacts[_index].setNickName(str[2]);
	_contacts[_index].setPhoneNumber(str[3]);
	_contacts[_index].setDarkestSecret(str[4]);
}

void	PhoneBook::_incrementIndex(void) {
	if (_index < 7)
		_index++;
	else
		_index = 0;
	if (_totalContacts <= 7)
		_totalContacts++;
}

void	PhoneBook::getContact(void) const {
	std::string index;
	int			id;

	if (_totalContacts == 0) {
		std::cout << "No contacts in phonebook." << std::endl;
		return;
	}
	for (int i = 0; i < _totalContacts; i++) {
		std::cout << std::setw(10) << "index" << '|' << std::setw(10) << "first name" << '|' << std::setw(10) << "last name" << '|' << std::setw(10) << "nickname" << '|' << std::endl;
		std::cout << std::setw(10) << i + 1 << '|';
		_displayField(_contacts[i].getFirstName());
		_displayField(_contacts[i].getLastName());
		_displayField(_contacts[i].getNickName());
		std::cout << std::endl;
	}
	std::cout << "Enter the index (1-8): ";
	std::cin >> id;
	if (std::cin.fail() || id < 0 || id > 8)
	{
		if (std::cin.eof())
			exit(1);
		std::cerr << "Wrong index!" << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return ;
	}
	else {
		if (id > _totalContacts) {
			std::cout << "No contact" << std::endl;
			return ;
		}
		std::cout << "First name: " << _contacts[id - 1].getFirstName() << std::endl;
		std::cout << "Last name: " << _contacts[id - 1].getLastName() << std::endl;
		std::cout << "Nickname: " << _contacts[id - 1].getNickName() << std::endl;
		std::cout << "Phone number: " << _contacts[id - 1].getPhoneNumber() << std::endl;
		std::cout << "Dark secret: " << _contacts[id - 1].getDarkestSecret() << std::endl;
	}
	return;
}

void	PhoneBook::_displayField(std::string field) const {
	std::cout << std::setw(10);
	if (field.length() > 10)
		std::cout << field.substr(0, 9) + '.';
	else
		std::cout << field;
	std::cout << '|';
}
