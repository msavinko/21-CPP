#include "Form.hpp"

const char* Form::GradeTooHighException::what() const throw()
{
	return "Form grade too high";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Form grade too low";
}

// Constructors
Form::Form() : _name("Default form"), _sign(false), _signGrade(150), _exeGrade(150)
{
}

Form::Form(const Form & copy) : _name(copy.getName()), _sign(copy.getSign()), _signGrade(copy.getSignGrade()), _exeGrade(copy.getExeGrade())
{
	if (_signGrade < MAXGRADE || _exeGrade < MAXGRADE)
		throw Form::GradeTooHighException();
	else if (_signGrade > MINGRADE || _exeGrade > MINGRADE)
		throw Form::GradeTooLowException();
	
}

Form::Form(const std::string& name, const int& signGrade, const int& exeGrade) : _name(name), _sign(false), _signGrade(signGrade), _exeGrade(exeGrade)
{
	if (_signGrade < MAXGRADE || _exeGrade < MAXGRADE)
		throw Form::GradeTooHighException();
	else if (_signGrade > MINGRADE || _exeGrade > MINGRADE)
		throw Form::GradeTooLowException();
}

// Destructor
Form::~Form()
{
}

// Getters
const std::string&	Form::getName(void) const
{
	return _name;
}

const bool&	Form::getSign(void) const
{
	return _sign;
}

const int&	Form::getSignGrade(void) const
{
	return _signGrade;
}

const int&	Form::getExeGrade(void) const
{
	return _exeGrade;
}

void	Form::beSigned(const Bureaucrat& b)
{
	if (b.getGrade() <= this->_signGrade)
		this->_sign = true;
	else
		throw Form::GradeTooHighException();
}

// Operators
Form & Form::operator=(const Form & assign)
{
	this->_sign = assign.getSign();
	return (*this);
}

std::ostream & operator<<(std::ostream& o, const Form& f)
{
	o << f.getName() << ". Sign grade: " << f.getSignGrade() << ". Exec grade: " << f.getExeGrade() << ". Signed: " << std::boolalpha << f.getSign();
	return (o);
}