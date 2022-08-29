#include "contact.hpp"

Contact::Contact(){} //constructor

Contact::~Contact(){} //distructor

//SETTER
void Contact::setName(string name)
{	this->m_firstname = name;}
void Contact::setLastname(string name)
{	this->m_lastname = name;}
void Contact::setNick(string name)
{	this->m_nickname = name;}
void Contact::setNumber(string number)
{	this->m_number = number;}
void Contact::setSecret(string secret)
{	this->m_secret = secret;}

//GETTER
string Contact::getName()
{	return this->m_firstname;}
string Contact::getLastname()
{	return this->m_lastname;}
string Contact::getNick()
{	return this->m_nickname;}
string Contact::getNumber()
{	return this->m_number;}
string Contact::getSecret()
{	return this->m_secret;}