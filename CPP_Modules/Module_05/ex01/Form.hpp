#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Form
{
private:
	const std::string	_name;
	bool				_sign;
	const int			_signGrade;
	const int			_exeGrade;

public:
	class GradeTooHighException : public std::exception {
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception {
		const char* what() const throw();
	};
	
	// Constructors
	Form();
	Form(const Form & copy);
	Form(const std::string& name, const int& signGrade, const int& exeGrade);

	// Destructor
	~Form();

	// Getters
	const std::string&	getName(void) const;
	const bool&		getSign(void) const;
	const int&	getSignGrade(void) const;
	const int&	getExeGrade(void) const;

	void		beSigned(const Bureaucrat& b);

	// Operators
	Form& operator=(const Form & assign);
};

std::ostream & operator<<(std::ostream& o, const Form& f);

#endif