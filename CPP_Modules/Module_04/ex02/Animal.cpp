#include "Animal.hpp"

// Constructors
Animal::Animal() : type("Animal")
{
	std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal(std::string type)
{
	this->type = type;
	std::cout << "Field Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &copy) : type(copy.type)
{
	std::cout << "Copy Animal constructor called" << std::endl;
}

// Destructor
Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType(void) const
{
	return (type);
}

// Operators
Animal &Animal::operator=(const Animal &assign)
{
	this->type = assign.type;
	return (*this);
}
