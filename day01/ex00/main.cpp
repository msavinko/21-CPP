#include "Zombie.hpp"

int main(){
	Zombie alfred = Zombie("Alfred"); //created with constructor
	alfred.announce();
	Zombie *kollin = newZombie("Kollin"); //created with dynamic memeroy allocation
	kollin->announce();
	randomChump("Wayne"); //function created zombie via calling a constructor 
	delete kollin;
	return (0);
}