#include "Zombie.hpp"

void Zombie::randomChump( std::string name ) {
	Zombie zom;
	zom.setName(name);
	zom.announce();
}
