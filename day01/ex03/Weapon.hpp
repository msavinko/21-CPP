#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon{
	private:
		std::string _type;
	public:
		Weapon(std::string type);
		~Weapon();
		const std::string &getType();  //function returns a const reference to the string.
		void setType(std::string newType);
};

#endif