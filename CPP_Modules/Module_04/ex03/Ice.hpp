#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	// Constructor
	Ice();
	Ice(const Ice &copy);

	// Destructor
	~Ice();

	AMateria *clone() const;
	void use(ICharacter &target);

	// Operators
	Ice &operator=(const Ice &assign);
};

#endif