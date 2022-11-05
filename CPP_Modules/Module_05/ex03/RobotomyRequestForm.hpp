/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 12:33:33 by aseptimu          #+#    #+#             */
/*   Updated: 2022/05/05 18:33:55 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:
	static const int	_sign;
	static const int	_exe;
	
	// Default private constructor
	RobotomyRequestForm();

	// Operators
	RobotomyRequestForm& operator=(const RobotomyRequestForm& assign);

public:
	// Constructors
	RobotomyRequestForm(const std::string& target);
	RobotomyRequestForm(const RobotomyRequestForm& copy);

	// Getters
	int getRRFSign(void) const;
	int getRRFExe(void) const;

	void	action(void) const;
	static AForm * clone(const std::string& name);


	// Destructor
	~RobotomyRequestForm();
};


#endif