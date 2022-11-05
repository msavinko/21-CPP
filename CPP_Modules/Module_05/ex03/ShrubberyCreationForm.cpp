#include "ShrubberyCreationForm.hpp"

// Constructors
ShrubberyCreationForm::ShrubberyCreationForm() { }

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : AForm("ShrubberyCreationForm", _sign, _exe, target) { }

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : \
	AForm(copy.getName(), copy.getSignGrade(), copy.getExeGrade(), copy.getTarget()) { }

// Destructor
ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

// Getters
int ShrubberyCreationForm::getSCFSign(void) const
{
	return _sign;
}
int ShrubberyCreationForm::getSCFExe(void) const
{
	return _exe;
}

void	ShrubberyCreationForm::action(void) const
{
	std::ofstream file(this->getTarget() + "_shrubbery");
	std::string	tree = "\n\
	              v .   ._, |_  .,\n\
           `-._\\/  .  \\ /    |/_\n\
               \\  _\\, y | \\//\n\
         _\\_.___\\, \\/ -.\\||\n\
           `7-,--.`._||  / / ,\n\
           /'     `-. `./ / |/_.'\n\
                     |    |//\n\
                     |_    /\n\
                     |-   |\n\
                     |   =|\n\
                     |    |\n\
--------------------/ ,  . \\--------._\n";
file << tree;
file.close(); 
}

AForm * ShrubberyCreationForm::clone(const std::string& name)
{
	return new ShrubberyCreationForm(name);
}

// Operators
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& assign)
{
	(void)assign;
	return (*this);
}

const int ShrubberyCreationForm::_sign = 145;
const int ShrubberyCreationForm::_exe = 137;