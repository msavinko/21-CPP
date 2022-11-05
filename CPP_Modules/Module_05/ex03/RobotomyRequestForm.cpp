/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 12:33:21 by aseptimu          #+#    #+#             */
/*   Updated: 2022/05/05 18:34:13 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

// Constructors
RobotomyRequestForm::RobotomyRequestForm() { }

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : AForm("RobotomyRequestForm", _sign, _exe, target) { }

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : \
	AForm(copy.getName(), copy.getSignGrade(), copy.getExeGrade(), copy.getTarget()) { }

// Destructor
RobotomyRequestForm::~RobotomyRequestForm()
{
}

// Getters
int RobotomyRequestForm::getRRFSign(void) const
{
	return _sign;
}
int RobotomyRequestForm::getRRFExe(void) const
{
	return _exe;
}

void	RobotomyRequestForm::action(void) const
{
	int fortune = std::rand();
	if (fortune % 2)
		std::cout << getName() << ": Makes some successfully drilling noises on " << getTarget() << std::endl;
	else
		std::cout << getName() << ": Failed to drill " << getTarget() << std::endl;
}

AForm * RobotomyRequestForm::clone(const std::string& name)
{
	return new RobotomyRequestForm(name);
}


// Operators
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& assign)
{
	(void)assign;
	return (*this);
}

const int RobotomyRequestForm::_sign = 72;
const int RobotomyRequestForm::_exe = 45;