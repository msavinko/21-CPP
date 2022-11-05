#include "Ice.hpp"

// Constructors
Ice::Ice() : AMateria("ice")
{
	std::cout << "Default Ice constructor called" << std::endl;
}

Ice::Ice(const Ice & copy)
{
	this->_type = copy._type;
	std::cout << "Copy Ice constructor called" << std::endl;
}

// Destructor
Ice::~Ice()
{
	std::cout << "Ice destructor called" << std::endl;
}

AMateria *Ice::clone() const
{
	return new Ice();
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

// Operators
Ice & Ice::operator=(const Ice & assign)
{
	this->_type = assign._type;
	return (*this);
}
