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
	this->client[index].setName(name);
	name = fillBook("and the last name: ");
	this->client[index].setLastname(name);
	name = fillBook("nickname: ");
	this->client[index].setNick(name);
	name = fillBook("phone number: ");
	this->client[index].setNumber(name);
	name = fillBook("and your darkest secret 😈: ");
	this->client[index].setSecret(name);
}

void Phonebook::printName(string name)
{
	int len = name.length();
	while (len++ < 10)
		cout << " ";
	if (len > 11)
	{

	}else
		cout << name << "|";
}

void Phonebook::printContact(int index){
	if (index >= 0)
		cout << "|         " << index + 1 << "|";
	printName(client[index].getName());
	printName(client[index].getLastname());
	printName(client[index].getNick());
	cout << endl;;
}

int Phonebook::chooseContact()
{
	string strIndex;
	cout << "Please, enter the index of the contact: ";
	getline(cin, strIndex);
	if (strIndex > "0" && strIndex < "9"){
		return stoi(strIndex);
	}else{
		cout << "Wrong index\n";
		chooseContact();
	}
	return (0);
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
		string check = client[index - 1].getName();
		if (isalpha(check[0]))
			printContact(index - 1);
		else
			cout << "This contact does not exist.\n" << endl;
	}
	else
		cout << "This contact does not exist.\n" << endl;
	
}