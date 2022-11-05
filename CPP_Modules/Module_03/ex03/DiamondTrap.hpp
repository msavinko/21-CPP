#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
public:
	// Constructors

	DiamondTrap(const std::string &name);
	DiamondTrap(const DiamondTrap &copy);

	// Destructor
	~DiamondTrap();

	// Operators
	DiamondTrap &operator=(const DiamondTrap &assign);

	// Getters / Setters
	std::string getName() const;
	void setName(std::string name);

	void attack(const std::string &target);
	void whoAmI(void) const;

private:
	std::string _name;

	DiamondTrap();
};

#endif
