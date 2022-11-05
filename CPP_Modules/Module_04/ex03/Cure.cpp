#include "Cure.hpp"

// Constructors
Cure::Cure() : AMateria("cure")
{
	std::cout << "Default Cure constructor called" << std::endl;
}

Cure::Cure(const Cure & copy)
{
	this->_type = copy._type;
	std::cout << "Copy Cure constructor called" << std::endl;
}

// Destructor
Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl;
}

AMateria *Cure::clone() const
{
	return new Cure();
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

// Operators
Cure & Cure::operator=(const Cure & assign)
{
	this->_type = assign._type;
	return (*this);
}
