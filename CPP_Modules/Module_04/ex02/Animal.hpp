#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
	std::string type;

public:
	// Constructors
	Animal();
	Animal(std::string type);
	Animal(const Animal &copy);

	// Destructor
	virtual ~Animal();

	// Getters / Setters
	std::string getType(void) const;

	virtual void makeSound(void) const = 0;

	// Operators
	Animal &operator=(const Animal &assign);
};

#endif
