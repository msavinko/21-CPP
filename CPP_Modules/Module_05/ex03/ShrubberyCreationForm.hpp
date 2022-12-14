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
	static AForm * clone(const std::string& name);

	// Destructor
	~ShrubberyCreationForm();
};


#endif