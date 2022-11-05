#include "Dog.hpp"

// Constructors
Dog::Dog() : Animal("Dog")
{
	std::cout << "Default Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &copy)
{
	this->type = copy.type;
	std::cout << "Copy Dog constructor called" << std::endl;
}

// Destructor
Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "Bark!" << std::endl;
}

// Operators

Dog &Dog::operator=(const Dog &assign)
{
	this->type = assign.type;
	return (*this);
}
