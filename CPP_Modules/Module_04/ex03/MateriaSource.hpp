#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria *_store[SSIZE];

public:
	// Constructors
	MateriaSource();
	MateriaSource(const MateriaSource &copy);

	// Destructor
	~MateriaSource();

	void learnMateria(AMateria *copy);
	AMateria *createMateria(std::string const &type);

	// Operators
	MateriaSource &operator=(const MateriaSource &assign);
};

#endif
