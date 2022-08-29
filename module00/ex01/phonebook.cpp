#include "phonebook.hpp"

Phonebook::Phonebook() {} //constructor

Phonebook::~Phonebook() {} //distructor

string fillBook(string text)
{
	string name;
	while(true)
	{
		cout << text;
		getline(cin, name);
		if (isalpha(name[0]) || isalnum(name[0]))
			break;
		else
		{
			cout << "Can't be empty. Please, try again." << endl;
			continue;
		}
	}
	return (name);
}

void Phonebook::newContact(int index)
{
	string name;
	name = fillBook("Enter the first name: ");
	this->client[index].setName(name);
	name = fillBook("and the last name: ");
	this->client[index].setLastname(name);
	name = fillBook("nickname: ");
	this->client[index].setNick(name);
	name = fillBook("phone number: ");
	this->client[index].setNumber(name);
}

void Phonebook::printContact(int index){
	cout << client[index].getName() << " ";
	cout << client[index].getLastname() << " ";
	cout << client[index].getNumber() << endl;
	}