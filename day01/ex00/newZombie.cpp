#include "Zombie.hpp"

Zombie* newZombie (std::string name){
	Zombie* newZombie = new Zombie(name);
	return &(newZombie);
}


// It creates a zombie, name it, and return it so
//  you can use it outside of the function
// scope.