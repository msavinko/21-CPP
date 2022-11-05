#include "Zombie.hpp"

Zombie*	Zombie::newZombie( std::string name ) {
	Zombie* zom = new Zombie(name);

	return (zom);
}
