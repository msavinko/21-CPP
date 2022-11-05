/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 14:11:28 by aseptimu          #+#    #+#             */
/*   Updated: 2022/04/23 18:10:51 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact( void ) {
	return ;
}

Contact::~Contact( void ) {
	return ;
}

std::string Contact::getLastName() const {
	return _lastName;
}

void Contact::setLastName(const std::string &lastName) {
	this->_lastName = lastName;
}

std::string Contact::getPhoneNumber() const {
	return _phoneNumber;
}

void Contact::setPhoneNumber(const std::string &phoneNumber) {
	this->_phoneNumber = phoneNumber;
}

std::string Contact::getFirstName() const {
	return _firstName;
}

void Contact::setFirstName(const std::string &firstName) {
	this->_firstName = firstName;
}

std::string Contact::getNickName() const {
	return _nickName;
}

void Contact::setNickName(const std::string &nickName) {
	this->_nickName = nickName;
}

std::string Contact::getDarkestSecret() const {
	return _darkestSecret;
}

void Contact::setDarkestSecret(const std::string &darkestSecret) {
	this->_darkestSecret = darkestSecret;
}
