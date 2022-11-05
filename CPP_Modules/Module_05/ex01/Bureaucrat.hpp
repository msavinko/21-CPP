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
