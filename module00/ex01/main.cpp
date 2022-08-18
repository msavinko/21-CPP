#include <iostream>
#include <string>

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
				int		number;
				Contact	client;
	public:
				Phonebook()
				{};
				void setNum(int num){number = num;}
				int getNum(){return number;}
};

int main(void)
{
	int num;

	std::cout << "Enter any number\n";
	std::cin >> num;
	std::cin.ignore(32767, '\n');
	Phonebook book;
	book.setNum(num);
	num = book.getNum() + 2;
	std::cout << "Your number + 2 is " << num << std::endl;
	return (0);
}