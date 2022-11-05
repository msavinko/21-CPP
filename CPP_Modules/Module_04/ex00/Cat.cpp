#include "Cat.hpp"

// Constructors
Cat::Cat() : Animal("Cat")
{
	std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &copy)
{
	this->type = copy.type;
	std::cout << "Copy Cat constructor called" << std::endl;
}

// Destructors
Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << "Meow!" << std::endl;
}

// Operators

Cat &Cat::operator=(const Cat &assign)
{
	this->type = assign.type;
	return (*this);
}
