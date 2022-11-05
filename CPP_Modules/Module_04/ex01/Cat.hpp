#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain *_b;

public:
	// Constructors
	Cat();
	Cat(const Cat &copy);

	// Destructors
	virtual ~Cat();

	// Getters
	Brain *getBrain() const;

	void makeSound() const;

	// Operators
	Cat &operator=(const Cat &assign);
};

#endif
