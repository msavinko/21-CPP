#include "Character.hpp"

// Constructors
Character::Character() : _inventory(), _name("")
{
	std::cout << "Default Character constructor called" << std::endl;
}

Character::Character(const Character &copy)
{
	this->_name = copy.getName();
	for (int i = 0; i < ISIZE; i++)
	{
		if (_inventory[i])
			delete this->_inventory[i];
		if (copy._inventory[i])
			this->_inventory[i] = copy._inventory[i]->clone();
	}
	std::cout << "Copy Character constructor called" << std::endl;
}

Character::Character(const std::string name) : _inventory()
{
	this->_name = name;
	std::cout << "Field Character constructor called" << std::endl;
}

// Destructor
Character::~Character()
{
	for (int i = 0; i < ISIZE; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
		_inventory[i] = NULL;
	}
	std::cout << "Character destructor called" << std::endl;
}

// Getters
std::string const &Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria *m)
{
	if (!m)
		return;
	for (int i = 0; i < ISIZE; i++)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			std::cout << "Equip character " << _name << " with " << m->getType() << std::endl;
			return;
		}
	}
	std::cout << "Can't equip character " << _name << " with " << m->getType() << ". INVENTORY FULL" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx <= ISIZE)
	{
		std::cout << "Unequip " << this->_inventory[idx]->getType() << " from charachter " << this->getName();
		this->_inventory[idx] = NULL;
		return;
	}
	std::cout << "Failed to unequip " << this->getName() << std::endl;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < ISIZE && _inventory[idx])
		_inventory[idx]->use(target);
	else
		std::cout << "Use function faild on charactar " << _name << std::endl;
}

// Operators
Character &Character::operator=(const Character &assign)
{
	this->_name = assign.getName();
	for (int i = 0; i < ISIZE; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
		if (assign._inventory[i])
			this->_inventory[i] = assign._inventory[i]->clone();
	}
	return (*this);
}
