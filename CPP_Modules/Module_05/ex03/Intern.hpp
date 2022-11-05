/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 16:56:43 by aseptimu          #+#    #+#             */
/*   Updated: 2022/05/05 17:16:51 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
public:

	// Constructors
	Intern();
	Intern(const Intern & copy);

	// Destructor
	~Intern();

	AForm *makeForm(const std::string& name, const std::string& target);

	// Operatros
	Intern & operator=(const Intern & assign);
};

#endif
