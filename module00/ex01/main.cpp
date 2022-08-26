#include <iostream>
#include <string>
using namespace std;

class Contact
{
	// private:
	// 	int num;
		// std::string surname;
	public:
				Contact()
				{std::cout << "hello\n";}

};

class Phonebook
{
	private:
				string m_name;
				// Contact	client;
	public:
				Phonebook()
				{};
				void setName(string name)
				{
					m_name = name;
				}
				string getName()
				{
					return m_name;
				}
};

int main(void)
{
	// int num;
	string name;
	Phonebook book;

	cout << "Enter your name\n";
	getline(cin, name);
	//cin.ignore(32767, '\n');
	book.setName(name);
	//num = book.getNum() + 2;
	cout << "Your name is " << book.getName() << endl;
	return (0);
}