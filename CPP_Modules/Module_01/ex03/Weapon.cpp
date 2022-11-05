#include "Weapon.hpp"

std::string Weapon::getType() const {
	return type;
}

void Weapon::setType(const std::string t) {
	this->type = t;
}


Weapon::Weapon( std::string t ) {
	this->type = t;
}

Weapon::~Weapon() {
	
}