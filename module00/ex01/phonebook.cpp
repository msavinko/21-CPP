#include "phonebook.hpp"

Phonebook::Phonebook() {} //constructor

Phonebook::~Phonebook() {} //distructor

string Phonebook::fillBook(string text)
{
	string name;
	while(true)
	{
		cout << text;
		getline(cin, name);
		if (isalpha(name[0]) || isalnum(name[0]))
			break;
		else{
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
	this->contact[index].setName(name);
	name = fillBook("and the last name: ");
	this->contact[index].setLastname(name);
	name = fillBook("nickname: ");
	this->contact[index].setNick(name);
	name = fillBook("phone number: ");
	this->contact[index].setNumber(name);
	name = fillBook("and your darkest secret 😈: ");
	this->contact[index].setSecret(name);
}

void Phonebook::printName(string name)
{
	int len = name.length();
	while (len++ < 10)
		cout << " ";
	if (len > 11)
	{
		for (int i = 0; i < 9; i++)
			cout << name[i];
		cout << ".|";
	}else
		cout << name << "|";
}

void Phonebook::printContact(int index){
	if (index >= 0)
		cout << "|         " << index + 1 << "|";
	printName(contact[index].getName());
	printName(contact[index].getLastname());
	printName(contact[index].getNick());
	cout << endl;;
}

int Phonebook::chooseContact()
{
	int index;
	while (true)
	{
		cout << "Please, enter the index of the contact: ";
		cin >> index;
		cin.ignore(32767, '\n');
		if (cin.fail()){
			cin.clear();
			cin.ignore(32767, '\n');
			continue;
		}else
			return (index);
	}
	return (index);
}

void Phonebook::searchContact()
{
	cout << "\n|     Index|First name| Last name|  Nickname|" << endl;
	int i = 0;
	while (i < 8){
		printContact(i++);
	}
	cout << endl;
	int index = chooseContact();
	
	if (index > 0 && index < 9)
	{
		string check = contact[index - 1].getName();
		if (isalpha(check[0]) || isalnum(check[0]))
			printContact(index - 1);
		else
			cout << "This contact does not exist.\n";
		cout << endl;
	}
	else
		cout << "This contact does not exist.\n" << endl;
	
}