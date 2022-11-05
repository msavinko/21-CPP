#include "Cat.hpp"

// Constructors
Cat::Cat() : Animal("Cat")
{
	_b = new Brain("Meow! Meow!");
	std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &copy)
{
	this->type = copy.type;
	this->_b = new Brain();
	*(this->_b) = *(copy._b);
	std::cout << "Copy Cat constructor called" << std::endl;
}

// Destructors
Cat::~Cat()
{
	delete _b;
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << "Meow!" << std::endl;
}

// Getters
Brain *Cat::getBrain() const
{
	return (_b);
}

// Operators

Cat &Cat::operator=(const Cat &assign)
{
	this->type = assign.type;
	if (this->_b)
		delete this->_b;
	this->_b = new Brain();
	*(this->_b) = *(assign._b);
	return (*this);
}
