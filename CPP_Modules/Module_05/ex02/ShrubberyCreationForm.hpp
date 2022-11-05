/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 12:10:51 by aseptimu          #+#    #+#             */
/*   Updated: 2022/05/05 14:17:16 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef	SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include <fstream>


class ShrubberyCreationForm : public AForm
{
private:
	static const int	_sign;
	static const int	_exe;
	
	// Default private constructor
	ShrubberyCreationForm();

	// Operators
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& assign);

public:
	// Constructors
	ShrubberyCreationForm(const std::string& target);
	ShrubberyCreationForm(const ShrubberyCreationForm& copy);

	// Getters
	int getSCFSign(void) const;
	int getSCFExe(void) const;
	
	void	action(void) const;

	// Destructor
	~ShrubberyCreationForm();
};


#endif