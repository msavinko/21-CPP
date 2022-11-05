/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 15:40:42 by aseptimu          #+#    #+#             */
/*   Updated: 2022/05/05 14:53:22 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

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

void	Bureaucrat::signForm(AForm & f)
{
	try
	{
		f.beSigned(*this);
		std::cout << this->getName() << " signed " << f.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->getName() << " couldn't sign " << f.getName() << " because " << e.what() << std::endl;
	}
	
}

void	Bureaucrat::executeForm(AForm const & form) const
{
	try
	{
		form.execute(*this);
		std::cout << _name << " executed " << form << std::endl; 
	}
	catch(const std::exception& e)
	{
		std::cerr << _name << " can't execute form " << form << ". Reason: " << e.what() << std::endl;
	}
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
