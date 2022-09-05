#include <iostream>
#include <string>

int main(){
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;

	std::cout << "Address of the String: " << &brain << std::endl;
	std::cout << "Address of the Pointer: " << stringPTR << std::endl;
	std::cout << "Address of the Reference: " << &stringREF << std::endl;

	std::cout << "\nValue of the String: " << brain << std::endl;
	std::cout << "Value of the Pointer: " << *stringPTR << std::endl;
	std::cout << "Value of the Reference: " << stringREF << std::endl;
	
	return (0);
}