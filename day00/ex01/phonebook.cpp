#include "phonebook.hpp"

Phonebook::Phonebook() {} 

Phonebook::~Phonebook() {} 

std::string Phonebook::fillBook(std::string text)
{
	std::string name;
	while(true)
	{
		std::cout << text;
		std::getline(std::cin, name);
		if (std::isalnum(name[0]))
			break;
		else{
			std::cout << "Can't be empty. Please, try again." << std::endl;
			continue;
		}
	}
	return (name);
}

void Phonebook::newContact(int index)
{
	std::string name;
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

void Phonebook::printName(std::string name)
{
	if (name.length() > 11){
		std::cout << name.substr(0,9) << ".";
	}else
		std::cout << std::setw(10) << name;
	std::cout << "|";
}

void Phonebook::printContacts(int index){
	std::cout << "|" << std::setw(10) << index + 1 << "|";
	printName(contact[index].getName());
	printName(contact[index].getLastname());
	printName(contact[index].getNick());
	std::cout << std::endl;;
}

void Phonebook::printContact(int index){
	std::cout << "\nFirst name: " << contact[index].getName() << std::endl;
	std::cout << "Last name: " << contact[index].getLastname() << std::endl;
	std::cout << "Nickname: " << contact[index].getNick() << std::endl;
	std::cout << "Phone number: " << contact[index].getNumber() << std::endl;
	std::cout << "The darkest secret 😈: " << contact[index].getSecret() << std::endl;
}

int Phonebook::chooseContact()
{
	int index;
	while (true)
	{
		std::cout << "Please, enter the index of the contact: ";
		std::cin >> index;
		std::cin.ignore(32767, '\n');
		if (std::cin.fail()){
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			continue;
		}else
			return (index);
	}
	return (index);
}

void Phonebook::searchContact()
{
	std::cout << "\n|     Index|First name| Last name|  Nickname|" << std::endl;
	int i = 0;
	while (i < 8){
		printContacts(i++);
	}
	std::cout << std::endl;
	int index = chooseContact();
	
	if (index > 0 && index < 9)
	{
		std::string check = contact[index - 1].getName();
		if (isalnum(check[0]))
			printContact(index - 1);
		else
			std::cout << "This contact does not exist.\n";
		std::cout << std::endl;
	}
	else
		std::cout << "This contact does not exist.\n" << std::endl;
	
}