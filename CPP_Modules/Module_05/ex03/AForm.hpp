#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class AForm
{
private:
	const std::string	_name;
	const std::string	_target;
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
	class FormNotSigned : public std::exception {
		const char* what() const throw();
	};
	
	// Constructors
	AForm();
	AForm(const AForm & copy);
	AForm(const std::string& name, const int& signGrade, const int& exeGrade, const std::string& target);
	// virtual AForm * clone(const std::string& name) = 0;

	// Destructor
	virtual ~AForm();

	// Getters & setters
	const std::string&	getName(void) const;
	const std::string&	getTarget(void) const;
	const bool&		getSign(void) const;
	const int&	getSignGrade(void) const;
	const int&	getExeGrade(void) const;

	void		beSigned(const Bureaucrat& b);
	virtual void	action(void) const = 0;
	void		execute(const Bureaucrat& executor) const;

	// Operators
	AForm& operator=(const AForm & assign);
};

std::ostream & operator<<(std::ostream& o, const AForm& f);

#endif