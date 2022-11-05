#include "Zombie.hpp"

int	main(void) {
	Zombie* zom = NULL;
	zom = (*zom).zombieHorde(10, "Anton");
	for (int i = 0; i < 10; i++) {
		zom[i].announce();
	}

	delete []zom;
	return (0);
}
