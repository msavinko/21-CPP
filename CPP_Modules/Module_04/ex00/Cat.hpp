#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
public:
	// Constructors
	Cat();
	Cat(const Cat &copy);

	// Destructors
	virtual ~Cat();

	void makeSound() const;

	// Operators
	Cat &operator=(const Cat &assign);
};

#endif
