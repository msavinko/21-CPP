#include "HumanB.hpp"


HumanB::HumanB( std::string name ) {
	this->_name = name;
}

Weapon *HumanB::getWeapon() const {
	return _weapon;
}

void HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
}

HumanB::~HumanB() {

}

void	HumanB::attack() {
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

