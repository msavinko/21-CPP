#include "phonebook.hpp"
#include "contact.hpp"

using namespace std;

int main(void)
{
	string command;
	Phonebook book;
	int index = 0;

	cout << "Enter your command: (ADD, SEARCH or EXIT)\n";
	getline(cin, command);
	while (command != "EXIT")
	{
		if (command == "ADD")
		{
			if (index == 8)
				index = 0;
			book.newContact(index);
			cout << "you have a new contact ";
			book.printContact(index);
			index++;
		}
			//cout << "you entered ADD" << endl;
		else if (command == "SEARCH")
			cout << "you entered SEARCH" << endl;
		else
			cout << "Such command does not exist, please, try again." << endl;
		// cout << index << endl;
		cout << endl << "**************" << endl;
		cout << "Enter your command: (ADD, SEARCH or EXIT)\n";
		getline(cin, command);
	}
	cout << "You exit the phonebook" << endl;
	return (0);
}