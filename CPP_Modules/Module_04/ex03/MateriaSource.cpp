#include "MateriaSource.hpp"

// Constructors
MateriaSource::MateriaSource() : _store()
{
	std::cout << "Default MaterialSource constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource & copy)
{
	for (int i = 0; i < SSIZE; i++)
	{
		if (_store[i])
			delete _store[i];
		if (copy._store[i])
			_store[i] = copy._store[i]->clone();
	}
	std::cout << "Copy MaterialSource constructor called" << std::endl;
}

// Destructor
MateriaSource::~MateriaSource()
{
	for (int i = 0; i < SSIZE; i++)
	{
		if (_store[i])
			delete _store[i];
	}
	std::cout << "MateriaSource destructor called" << std::endl;
}

void	MateriaSource::learnMateria(AMateria* copy)
{
	if (!copy)
		return ;
	for (int i = 0; i < SSIZE; i++)
	{
		if (!_store[i])
		{
			_store[i] = copy;
			std::cout << "Materia " << copy->getType() << " stored" << std::endl;
			return ;
		}
	}
	std::cout << "Not enough place in storage to learn " << copy->getType() << std::endl;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < SSIZE; i++)
	{
		if (_store[i] && _store[i]->getType() == type)
		{
			std::cout << "Creating materia " << type << std::endl;
			return _store[i]->clone();
		}
	}
	std::cout << "Fail to create materia" << std::endl;
	return NULL;
}

// Operators
MateriaSource & MateriaSource::operator=(const MateriaSource & assign)
{
	for (int i = 0; i < SSIZE; i++)
	{
		if (_store[i])
			delete _store[i];
		if (assign._store[i])
			_store[i] = assign._store[i]->clone();
	}
	return (*this);
}
