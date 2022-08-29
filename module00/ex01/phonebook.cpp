#include "phonebook.hpp"

Phonebook::Phonebook() {} //constructor

Phonebook::~Phonebook() {} //distructor

void Phonebook::newContact()
{
	string name;
	cout << "Enter your name" << endl;
	getline(cin, name);
	this->client.setName(name);
}

void Phonebook::printContact()
{	cout << this->client.getName() << endl;}