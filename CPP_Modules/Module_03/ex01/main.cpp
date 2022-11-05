#include "ScavTrap.hpp"

int main(void)
{

	ClapTrap *b = new ScavTrap("Alex");
	b->attack("Micke");
	delete b;
	std::cout << std::endl;

	std::string s1 = "Wayne";
	std::string s2 = "Jane";
	std::string s3 = "Rick";

	ScavTrap t1(s1);
	ScavTrap t2(s2);
	ClapTrap t3(s3);

	std::cout << std::endl;
	t1.attack(s3);
	t3.takeDamage(t1.getAttackDamage());
	t3.takeDamage(t1.getAttackDamage());
	std::cout << std::endl;

	std::cout << std::endl;
	t1.attack(s2);
	t2.takeDamage(t1.getAttackDamage());
	t2.beRepaired(t1.getAttackDamage() / 2);
	t2.beRepaired(t1.getAttackDamage() / 2);
	t2.beRepaired(t1.getAttackDamage() / 2);
	std::cout << std::endl;

	std::cout << std::endl;
	t1.attack(s3);
	t2.takeDamage(t1.getAttackDamage());
	t1.attack(s3);
	t2.takeDamage(t1.getAttackDamage());
	t1.attack(s3);
	t2.takeDamage(t1.getAttackDamage());
	std::cout << std::endl;

	std::cout << std::endl;
	t2.guardGate();
	std::cout << std::endl;
	return (0);
}