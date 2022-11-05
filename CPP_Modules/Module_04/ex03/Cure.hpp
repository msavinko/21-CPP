#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
public:
	// Constructor
	Cure();
	Cure(const Cure & copy);

	// Destructor
	~Cure();

	AMateria* clone() const;
	void use(ICharacter& target);

	// Operators
	Cure & operator=(const Cure & assign);
};


#endif