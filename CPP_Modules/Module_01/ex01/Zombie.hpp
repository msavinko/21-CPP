#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
	std::string	_name;
public:
	Zombie*	zombieHorde( int N, std::string name );
	void	announce( void );
	Zombie();
	Zombie( std::string name );
	~Zombie();

	std::string name() const;
	void setName(const std::string &name);
};

#endif
