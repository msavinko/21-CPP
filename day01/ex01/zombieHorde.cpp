#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
	if (N <= 0)
		return (NULL);
	Zombie *hordZombies = new (std::nothrow)Zombie[N];
	if (!hordZombies)
		std::cout << "Could not allocate memory" << std::endl;
	for (int i = 0; i < N; i++){
		hordZombies[i].setName(name);
		hordZombies[i].announce();
	}
	return (hordZombies);
}