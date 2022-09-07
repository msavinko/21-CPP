#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB{
	private:
		Weapon *_weapon;
		std::string _name;
	public:
		HumanB(std::string name);
		~HumanB();
		void attack();
		void setWeapon(Weapon &weapon);
};

#endif
// HumanB class DOES NOT TAKE WEAPON
// MAY NOT ALWAYS HAVE A WEAPON - POINTER as it can be NULL