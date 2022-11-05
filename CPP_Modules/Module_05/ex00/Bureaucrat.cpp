#include "Bureaucrat.hpp"

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Bureaucrat grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Bureaucrat grade too low";
}

// Constructors
Bureaucrat::Bureaucrat() : _name("Bureaucrat"), _grade(150) { }


Bureaucrat::Bureaucrat(const std::string& name, const int& grade) : _name(name)
{
	if (grade > MINGRADE)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < MAXGRADE)
		throw Bureaucrat::GradeTooHighException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat & copy) : _name(copy.getName())
{
	if (copy.getGrade() > MINGRADE)
		throw Bureaucrat::GradeTooLowException();
	else if (copy.getGrade() < MAXGRADE)
		throw Bureaucrat::GradeTooHighException();
	this->_grade = copy.getGrade();
}

// Destructor
	Bureaucrat::~Bureaucrat()
	{
	}

// Getters
const std::string& Bureaucrat::getName(void) const
{
	return _name;
}

const int& Bureaucrat::getGrade(void) const
{
	return _grade;
}

void	Bureaucrat::incrementGrade(void)
{
	if (_grade - 1 < MAXGRADE)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade--;
}

void	Bureaucrat::decrementGrade(void)
{
	if (_grade + 1 > MINGRADE)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade++;
}

// Operators
Bureaucrat & Bureaucrat::operator=(const Bureaucrat & assign)
{
	if (assign.getGrade() > MINGRADE)
		throw Bureaucrat::GradeTooLowException();
	else if (assign.getGrade() < MAXGRADE)
		throw Bureaucrat::GradeTooHighException();
	this->_grade = assign._grade;
	return (*this);
}

std::ostream& operator<<(std::ostream& o, const Bureaucrat& b)
{
	o << b.getName() << ", bureaucrat grade " << b.getGrade();
	return (o);
}
