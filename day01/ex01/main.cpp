#include "Zombie.hpp"

int main(void){
	int hordNum = 6;
	Zombie *hord = zombieHorde(hordNum, "Ork"); //created a hord of 8 zombies via memory allocation
	if (hord != NULL)
		delete [] hord;
}