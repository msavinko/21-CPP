#include "Harl.hpp"

int main(int argv, char **argc){
	if (argv != 2){
		std::cout << "Wrong arguments" << std::endl;
		return (0);
	}
	Harl Harl;
	Harl.complain(argc[1]);

}
