#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
	Zombie *hordZombies = new Zombie[N];//(name);
	for (int i = 0; i < N; i++){
		hordZombies[i].setName(name);
		hordZombies[i].announce();
	}
	return (hordZombies);
}