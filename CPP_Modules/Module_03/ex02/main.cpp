#include "FragTrap.hpp"
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

	FragTrap t1(s1);
	ScavTrap t2(s2);
	ClapTrap t3(s3);

	std::cout << std::endl;
	t1.highFivesGuys();
	std::cout << std::endl;

	std::cout << std::endl;
	t2.guardGate();
	std::cout << std::endl;

	std::cout << std::endl;
	t3.attack(s1);
	t1.takeDamage(0);
	t3.attack(s2);
	t2.takeDamage(0);
	std::cout << std::endl;

	std::cout << std::endl;
	t1.attack(s2);
	t2.takeDamage(t1.getAttackDamage());
	t1.attack(s3);
	t3.takeDamage(t1.getAttackDamage() * 2);
	std::cout << std::endl;

	std::cout << std::endl;
	t3.beRepaired(t3.getHp());
	std::cout << std::endl;
	return (0);
}