#include "Bureaucrat.hpp"

void	createB(const std::string& name, const int& grade)
{
	try
	{
		Bureaucrat b(name, grade);
		std::cout << b << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	upgradeB(Bureaucrat b, void (Bureaucrat::*f)(void))
{
	try
	{
		(b.*f)();
		std::cout << b << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}	
}

int main(void)
{
	Bureaucrat b("Petya", 150);
	createB("Sanya", 10);
	std::cout << std::endl;

	createB("Senya", 150);
	std::cout << std::endl;

	upgradeB(b, &Bureaucrat::decrementGrade);
	std::cout << std::endl;

	createB("Senya", 0);
	std::cout << std::endl;

	upgradeB(b, &Bureaucrat::incrementGrade);
	std::cout << std::endl;
}