#include "Zombie.hpp"

int main(void){
	Zombie *hord = zombieHorde(3, "Ork");
	delete [] hord;
}