#include "Zombie.hpp"

int main(void){
	Zombie *hord = zombieHorde(8, "Ork");
	if (hord != NULL)
		delete [] hord;
}