#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
	std::string type;

public:
	// Constructors
	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(const WrongAnimal &copy);

	// Destructor
	~WrongAnimal();

	// Getters / Setters
	std::string getType(void) const;

	void makeSound(void) const;

	// Operators
	WrongAnimal &operator=(const WrongAnimal &assign);
};

#endif
