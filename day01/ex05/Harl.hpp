#ifndef HARL_H
# define HARL_H
# include <iostream>
# include <string>

class Harl{
	private:
			void _debug( void );
			void _info( void );
			void _warning( void );
			void _error( void );
			std::string	_lvlText[4];
			void (Harl::*_fcnPtr[4])();
	public:
			Harl();
			~Harl();
			void complain( std::string level );
};

#endif

//pointer to member functions.