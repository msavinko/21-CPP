#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
private:
	std::string	type;
public:
	Weapon( std::string t );
	~Weapon();
	std::string getType() const;
	void setType(const std::string t);
};

#endif
