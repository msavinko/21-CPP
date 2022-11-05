#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : public virtual ClapTrap
{
public:
	// Constructors
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &copy);

	// Destructor
	virtual ~ScavTrap();

	// Operators
	ScavTrap &operator=(const ScavTrap &assign);

	void attack(const std::string &target);
	void guardGate();

protected:
	ScavTrap();
};

#endif
