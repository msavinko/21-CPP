/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 17:58:11 by aseptimu          #+#    #+#             */
/*   Updated: 2022/05/05 11:37:37 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

const char* AForm::GradeTooHighException::what() const throw()
{
	return "Form grade too high";
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return "Form grade too low";
}

const char* AForm::FormNotSigned::what() const throw()
{
	return "Form not signed";
}

// Constructors
AForm::AForm() : _name("Default form"), _target("Default target"), _sign(false), _signGrade(150), _exeGrade(150)
{
}

AForm::AForm(const AForm & copy) : _name(copy.getName()), _target(copy.getTarget()), _sign(copy.getSign()), _signGrade(copy.getSignGrade()), _exeGrade(copy.getExeGrade())
{
	if (_signGrade < MAXGRADE || _exeGrade < MAXGRADE)
		throw AForm::GradeTooHighException();
	else if (_signGrade > MINGRADE || _exeGrade > MINGRADE)
		throw AForm::GradeTooLowException();
	
}

AForm::AForm(const std::string& name, const int& signGrade, const int& exeGrade, const std::string& target) : \
			_name(name), _target(target), _sign(false), _signGrade(signGrade), _exeGrade(exeGrade)
{
	if (_signGrade < MAXGRADE || _exeGrade < MAXGRADE)
		throw AForm::GradeTooHighException();
	else if (_signGrade > MINGRADE || _exeGrade > MINGRADE)
		throw AForm::GradeTooLowException();
}

// Destructor
AForm::~AForm()
{
}

// Getters & setters
const std::string&	AForm::getTarget(void) const
{
	return _target;
}
const std::string&	AForm::getName(void) const
{
	return _name;
}

const bool&	AForm::getSign(void) const
{
	return _sign;
}

const int&	AForm::getSignGrade(void) const
{
	return _signGrade;
}

const int&	AForm::getExeGrade(void) const
{
	return _exeGrade;
}

void	AForm::beSigned(const Bureaucrat& b)
{
	if (b.getGrade() <= this->_signGrade)
		this->_sign = true;
	else
		throw AForm::GradeTooHighException();
}

void		AForm::execute(const Bureaucrat& executor) const
{
	if (!_sign)
		throw AForm::FormNotSigned();
	else if (executor.getGrade() > this->_signGrade)
		throw AForm::GradeTooHighException();
	else
		action();
}

// Operators
AForm & AForm::operator=(const AForm & assign)
{
	this->_sign = assign.getSign();
	return (*this);
}

std::ostream & operator<<(std::ostream& o, const AForm& f)
{
	o << f.getName() << ". Sign grade: " << f.getSignGrade() << ". Exec grade: " << f.getExeGrade() << ". Signed: " << std::boolalpha << f.getSign();
	return (o);
}