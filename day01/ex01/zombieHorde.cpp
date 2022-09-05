#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
	if (N < 0)
		return (NULL);
	Zombie *hordZombies = new Zombie[N];
	for (int i = 0; i < N; i++){
		hordZombies[i].setName(name);
		hordZombies[i].announce();
	}
	return (hordZombies);
}