#include "phonebook.hpp"
#include "contact.hpp"

using namespace std;

int main(void)
{
	string command;
	Phonebook book;
	int index = 0;

	cout << "Enter your command (ADD, SEARCH or EXIT): ";
	getline(cin, command);
	while (command != "EXIT")
	{
		if (command == "ADD"){
			if (index == 8)
				index = 0;
			book.newContact(index++);
		}else if (command == "SEARCH"){
			book.searchContact();
		}else
			cout << "Such command does not exist, please, try again\n" << endl;
		cout << "Enter your command (ADD, SEARCH or EXIT): ";
		getline(cin, command);
	}
	cout << "\n   ~~~ You exit the phonebook ~~~   \n" << endl;
	return (0);
}