/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 15:39:40 by aseptimu          #+#    #+#             */
/*   Updated: 2022/05/05 19:13:05 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(void) {
	{
		Intern  someRandomIntern;
		AForm*   rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		delete rrf;
	}
	{
		Intern  someRandomIntern;
		AForm*   rrf;
		rrf = someRandomIntern.makeForm("shrubbery request", "Bender");
		delete rrf;
	}
	{
		Intern  someRandomIntern;
		AForm*   rrf;
		rrf = someRandomIntern.makeForm("presidential request", "Bender");
		delete rrf;
	}
	{
		Intern  someRandomIntern;
		AForm*   rrf;
		rrf = someRandomIntern.makeForm("bad request", "Bender");
		delete rrf;
	}
}