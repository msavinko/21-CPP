#include "AMateria.hpp"

// Constructors
AMateria::AMateria()
{
	_type = "";
	std::cout << "Default AMateria constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type)
{
	this->_type = type;
	std::cout << "Field AMateria constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &copy)
{
	this->_type = copy._type;
	std::cout << "Copy AMateria constructor called" << std::endl;
}

// Destructor
AMateria::~AMateria()
{
	std::cout << "AMateria destructor called" << std::endl;
}

std::string const &AMateria::getType() const
{
	return this->_type;
}

void AMateria::use(ICharacter &target)
{
	std::cout << "Materia AMateria on " << target.getName() << std::endl;
}

// Operators
AMateria &AMateria::operator=(const AMateria &assign)
{
	this->_type = assign._type;
	return (*this);
}