#include "Zombie.hpp"

int	main(void) {
	Zombie* zom = NULL;
	zom = (*zom).newZombie("Anton");
	zom->announce();
	delete zom;

	(*zom).randomChump("Sanya");	
	return (0);
}
