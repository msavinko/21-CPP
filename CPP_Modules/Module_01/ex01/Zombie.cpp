#include "Zombie.hpp"


void	Zombie::announce( void ) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie( void ) {
	return ;
}

Zombie::Zombie( std::string name ) {
	this->_name = name;
	return ;
}

Zombie::~Zombie(){
	std::cout << this->_name << " is dead" << std::endl;
}

std::string Zombie::name() const {
	return _name;
}

void Zombie::setName(const std::string &name) {
	_name = name;
}
