#include "contact.hpp"

Contact::Contact(){}

Contact::~Contact(){}

//SETTER
void Contact::setName(std::string name){
	this->_firstname = name;}
void Contact::setLastname(std::string name){	
	this->_lastname = name;}
void Contact::setNick(std::string name){	
	this->_nickname = name;}
void Contact::setNumber(std::string number){
	this->_number = number;}
void Contact::setSecret(std::string secret){
	this->_secret = secret;}

//GETTER
std::string	Contact::getName(){
	return this->_firstname;
}
std::string	Contact::getLastname(){
	return this->_lastname;
}
std::string	Contact::getNick(){
	return this->_nickname;
}
std::string	Contact::getNumber(){
	return this->_number;
}
std::string	Contact::getSecret(){
	return this->_secret;
}