#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA{
	private:
		Weapon &_weapon;
		std::string _name;
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void attack();
};

#endif
// HumanA class TAKES WEAPON
// ALWAYS BE ARMED - REFERENCE as it can't be empty