/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 15:40:54 by aseptimu          #+#    #+#             */
/*   Updated: 2022/05/05 12:06:45 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# define MINGRADE 150
# define MAXGRADE 1

# include <iostream>

class Form;

class Bureaucrat
{
private:
	const	std::string _name;
	int		_grade;
public:
	class	GradeTooHighException : public std::exception {
		const char* what() const throw();
	};
	class	GradeTooLowException : public std::exception {
		const char* what() const throw();
	};

	// Constructors
	Bureaucrat( void );
	Bureaucrat(const std::string& name, const int& grade);
	Bureaucrat( const Bureaucrat & copy );

	// Destructor
	~Bureaucrat();

	// Getters
	const std::string&	getName(void) const;
	const int&			getGrade(void) const;

	void	incrementGrade(void);
	void	decrementGrade(void);
	void	signForm(Form & f);

	// Operators
	Bureaucrat & operator=(const Bureaucrat & assign);
};
std::ostream& operator<<(std::ostream& o, const Bureaucrat& b);

#endif
