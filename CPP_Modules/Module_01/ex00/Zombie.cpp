#include "Zombie.hpp"


Zombie::Zombie( void ) {
	return ;
}

Zombie::Zombie( std::string name ) {
	this->name = name;
	return ;
}

Zombie::~Zombie(){
	std::cout << this->name << " is dead" << std::endl;
}

void	Zombie::setName(const std::string &name_) {
	name = name_;
}

void	Zombie::announce( void ) {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
