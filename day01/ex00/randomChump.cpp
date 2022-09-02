#include "Zombie.hpp"

void randomChump( std::string name ){
	Zombie randonZombie = Zombie(name);
	randonZombie.announce();
}
