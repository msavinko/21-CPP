/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 15:39:40 by aseptimu          #+#    #+#             */
/*   Updated: 2022/05/05 12:06:34 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	Bureaucrat sen("Senya", 52);
	Bureaucrat jo("Jopa", 47);
	Form f1("Standart form", 50, 20);

	std::cout << "<<BAD FORM CREATION>>" << std::endl;
	try
	{
		Form f4("Incorrect form", -1, 20);
		std::cout << f4 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	std::cout << "<<BAD BUREAUCRAT CREATOR>>" << std::endl;
	try
	{
		Bureaucrat sen("Bad", -52);
		std::cout << sen << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "<<Senya grade " << sen.getGrade() << " trying to sign form with grade " << f1.getSignGrade() << ">>" <<  std::endl;
	sen.signForm(f1);
	std::cout << std::endl;

	std::cout << "<<Jopa grade " << jo.getGrade() << " trying to sign form with grade " << f1.getSignGrade() << ">>" <<  std::endl;
	jo.signForm(f1);
	std::cout << std::endl;

	std::cout << "<<Form info>>" << std::endl;
	std::cout << f1 << std::endl;
	std::cout << std::endl;

	std::cout << "<<Bureaucrat info>>" << std::endl;
	std::cout << jo << std::endl;
	std::cout << std::endl;
}