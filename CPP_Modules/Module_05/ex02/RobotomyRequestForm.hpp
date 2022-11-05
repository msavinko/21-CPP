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

	// Destructor
	~RobotomyRequestForm();
};


#endif