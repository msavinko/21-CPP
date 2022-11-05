#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	// Constructors
	WrongCat();
	WrongCat(const WrongCat &copy);

	// Destructors
	~WrongCat();

	void makeSound() const;

	// Operators
	WrongCat &operator=(const WrongCat &assign);
};

#endif
