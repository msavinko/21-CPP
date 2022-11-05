#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
public:
	// Constructors
	Dog();
	Dog(const Dog &copy);

	// Destructors
	virtual ~Dog();

	void makeSound() const;

	// Operators
	Dog &operator=(const Dog &assign);
};

#endif
