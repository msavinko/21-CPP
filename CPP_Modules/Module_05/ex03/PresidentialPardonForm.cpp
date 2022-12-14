#include "PresidentialPardonForm.hpp"

// Constructors
PresidentialPardonForm::PresidentialPardonForm() { }

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : AForm("PresidentialPardonForm", _sign, _exe, target) { }

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) : \
	AForm(copy.getName(), copy.getSignGrade(), copy.getExeGrade(), copy.getTarget()) { }

// Destructor
PresidentialPardonForm::~PresidentialPardonForm()
{
}

// Getters
int PresidentialPardonForm::getPPFSign(void) const
{
	return _sign;
}
int PresidentialPardonForm::getPPFExe(void) const
{
	return _exe;
}

void	PresidentialPardonForm::action(void) const
{
	std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

AForm * PresidentialPardonForm::clone(const std::string& name)
{
	return new PresidentialPardonForm(name);
}

// Operators
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& assign)
{
	(void)assign;
	return (*this);
}

const int PresidentialPardonForm::_sign = 25;
const int PresidentialPardonForm::_exe = 5;
