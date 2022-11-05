#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# define ISIZE	4

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
private:
	AMateria* _inventory[ISIZE];
	std::string _name;
public:
	// Constructors
	Character();
	Character(const Character & copy);
	Character(const std::string name);
	
	// Destructor
	~Character();

	// Getters
	std::string const & getName() const;

	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

	// Operators
	Character & operator=(const Character & assign);
};

#endif
