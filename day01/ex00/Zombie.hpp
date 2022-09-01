#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie{
	private:
			std::string _name;
	public:
			Zombie(std::string name);
			~Zombie();
			void announce( void);
			// void setName(std::string name);
			std::string getName();
			// Zombie* newZombie (std::string name);
};

#endif