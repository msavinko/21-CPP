#include "replace.hpp"
# include <iostream>
# include <string>
# include <fstream>

int main(int argc, char **argv){

	if (argc != 4){
		std::cout <<  "Wrong number of arguments" << std::endl;
		return (0);
	}
	Replace sed;
	sed.changeContent(argv[1], argv[2], argv[3]);
	return (0);
}