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