/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 13:56:31 by aseptimu          #+#    #+#             */
/*   Updated: 2022/05/05 14:23:01 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

// Constructors
PresidentialPardonForm::PresidentialPardonForm() { }

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : AForm("PresidentialPardonForm", _sign, _exe, target) { }

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) : \
	AForm(copy.getName(), copy.getSignGrade(), copy.getExeGrade(), copy.getTarget()) { }

// Destructor
PresidentialPardonForm::~PresidentialPardonForm()
{
}

// Getters
int PresidentialPardonForm::getPPFSign(void) const
{
	return _sign;
}
int PresidentialPardonForm::getPPFExe(void) const
{
	return _exe;
}

void	PresidentialPardonForm::action(void) const
{
	std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

// Operators
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& assign)
{
	(void)assign;
	return (*this);
}

const int PresidentialPardonForm::_sign = 25;
const int PresidentialPardonForm::_exe = 5;
