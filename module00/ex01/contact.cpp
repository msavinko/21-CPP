#include "contact.hpp"

Contact::Contact(){} //constructor

Contact::~Contact(){} //distructor

//SETTER
void Contact::setName(string name)
{	this->_firstname = name;}

void Contact::setLastname(string name)
{	this->_lastname = name;}

void Contact::setNick(string name)
{	this->_nickname = name;}

void Contact::setNumber(string number)
{	this->_number = number;}

void Contact::setSecret(string secret)
{	this->_secret = secret;}

