#include "Harl.hpp"

Harl::Harl(){
	this->_lvlText[0] = "DEBUG";
	this->_lvlText[1] = "INFO";
	this->_lvlText[2] = "WARNING";
	this->_lvlText[3] = "ERROR";
	this->_fcnPtr[0] = &Harl::_debug;
	this->_fcnPtr[1] = &Harl::_info;
	this->_fcnPtr[2] = &Harl::_warning;
	this->_fcnPtr[3] = &Harl::_error;
}
Harl::~Harl(){
}

void Harl::_debug( void ){
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void Harl::_info( void ){
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}
void Harl::_warning( void ){
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::_error( void ){
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level ){
	for (int i = 0; i < 4; i++){
		if (this->_lvlText[i] == level)
			(this->*_fcnPtr[i])();
	}
}