/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 16:57:24 by aseptimu          #+#    #+#             */
/*   Updated: 2022/05/05 18:44:50 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

// Constructors
Intern::Intern()
{
}

Intern::Intern(const Intern & copy)
{
	*this = copy;
}


// Destructor
Intern::~Intern()
{
}

AForm *Intern::makeForm(const std::string& name, const std::string& target)
{
	AForm * ret;
	AForm * (*Forms[3])(const std::string& name) = {&PresidentialPardonForm::clone, &RobotomyRequestForm::clone, &ShrubberyCreationForm::clone};
	std::string	forms[3] = {"presidential request", "robotomy request", "shrubbery request"};
	int i = 0;
	while (i < 3 && name.compare(forms[i])) {
		i++;
	}
	switch (i)
	{
	case 3:
		std::cout << "Form doesn't exist" << std::endl;
		return NULL;
		break;
	
	default:
		ret = Forms[i](target);
		std::cout << "Intern creates " << *ret << std::endl;
		break;
	}
	return ret;
}

// Operators
Intern & Intern::operator=(const Intern & assign) {
	(void)assign;
	return (*this);
}
