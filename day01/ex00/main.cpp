#include "Zombie.hpp"

int main(){
	Zombie alfred = Zombie("Alfred");
	Zombie* kollin = new Zombie("Kollin");
	// Zombie* kollin = Zombie:: newZombie("Kollin");
	alfred.announce();
	kollin->announce();

	delete kollin;
	return (0);
}