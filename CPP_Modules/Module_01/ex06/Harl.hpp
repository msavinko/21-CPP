#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl
{
private:
	static const int funcs = 4;
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	void (Harl::*message[funcs])( void );
	static const std::string harl[funcs];
public:
	Harl();
	~Harl();
	void    complain( std::string level );
};

#endif
