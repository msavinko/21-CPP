/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 12:35:21 by aseptimu          #+#    #+#             */
/*   Updated: 2022/05/05 17:59:07 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
	static const int	_sign;
	static const int	_exe;
	
	// Default private constructor
	PresidentialPardonForm();

	// Operators
	PresidentialPardonForm& operator=(const PresidentialPardonForm& assign);


public:
	// Constructors
	PresidentialPardonForm(const std::string& target);
	PresidentialPardonForm(const PresidentialPardonForm& copy);

	// Getters
	int getPPFSign(void) const;
	int getPPFExe(void) const;
	
	void	action(void) const;
	static AForm * clone(const std::string& name);

	// Destructor
	~PresidentialPardonForm();
};

#endif