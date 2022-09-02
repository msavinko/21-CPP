#include "Zombie.hpp"

int main(){
	Zombie alfred = Zombie("Alfred");
	alfred.announce();
	Zombie *kollin = newZombie("Kollin");
	kollin->announce();
	delete kollin;
	randomChump("Wayne");
	return (0);
}