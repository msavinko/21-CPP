#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain *_b;

public:
	// Constructors
	Dog();
	Dog(const Dog &copy);

	// Destructors
	virtual ~Dog();

	// Getters
	Brain *getBrain() const;

	void makeSound() const;

	// Operators
	Dog &operator=(const Dog &assign);
};

#endif
