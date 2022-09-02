#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv){
	if (argc == 4){
		std::ifstream filename(argv[1]);
		std::string s1;
		std::string s2;
		// filename = argv[1];
		s1 = argv[2];
		s2 = argv[3];
		filename >> s1 >> s2;
		std::cout << "\nstr1: " << s1 << "\nstr2: " << s2 << std::endl;
	}else{
		std::cout <<  "wrong number of parameters";
	}

	return (0);
}