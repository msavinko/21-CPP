#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name){
	std::cout << "Zombie " << this->_name << " has been created 🧟" << std::endl;
}
Zombie::~Zombie(){
	std::cout << "Zombie " << this->_name << " has been destroyed 🧟" << std::endl;
	// delete 
}

// void Zombie::setName(std::string name){
// 	this->_name = name;
// }

std::string Zombie::getName(){
	return this->_name;
}

void Zombie::announce( void ){
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}