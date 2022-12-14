#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class FragTrap : public virtual ClapTrap
{
public:
	// Constructors
	FragTrap(std::string name);
	FragTrap(const FragTrap &copy);

	// Destructor
	virtual ~FragTrap();

	// Operators
	FragTrap &operator=(const FragTrap &assign);

	void highFivesGuys(void);

protected:
	FragTrap();
};

#endif
