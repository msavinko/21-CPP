#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
private:
	std::string name;
	
public:
	Zombie( void );
	Zombie( std::string name );
	~Zombie();
	void	announce( void );
	void	randomChump( std::string name );
	Zombie*	newZombie( std::string name );
	
	void setName(const std::string &name_);
	
};

#endif
