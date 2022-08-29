#include "phonebook.hpp"

using namespace std;

int main(void)
{
	// int num;
	string command;
	Phonebook book;

	cout << "Enter your command: (ADD, SEARCH or EXIT)\n";
	getline(cin, command);
	while (command != "EXIT")
	{
		if (command == "ADD")
		{
			book.newContact();
			cout << "you have a new contact ";
			
		}
			//cout << "you entered ADD" << endl;
		else if (command == "SEARCH")
			cout << "you entered SEARCH" << endl;
		else
			cout << "Such command does not exist, please, try again." << endl;

		cout << "Enter your command: (ADD, SEARCH or EXIT)\n";
		getline(cin, command);
	}
	cout << "You exit the phonebook" << endl;
	return (0);
}