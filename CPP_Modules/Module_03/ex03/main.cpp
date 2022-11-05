#include "DiamondTrap.hpp"

int main(void)
{
	std::string s = "Alex";
	DiamondTrap d(s);

	std::cout << std::endl;
	d.whoAmI();
	std::cout << std::endl;

	std::cout << "Hp is " << d.getHp() << std::endl;
	;
	std::cout << std::endl;

	std::cout << "Energy is " << d.getEnergy() << std::endl;
	;
	std::cout << std::endl;

	std::cout << "Attack Damage is " << d.getAttackDamage() << std::endl;
	;
	std::cout << std::endl;

	std::cout << std::endl;
	d.attack(s);
	std::cout << std::endl;

	DiamondTrap b(d);
	b.setName("Wayne");
	b.ClapTrap::setName("Alex_clap_name");

	std::cout << std::endl;
	b.whoAmI();
	std::cout << std::endl;

	std::cout << std::endl;
	b.guardGate();
	std::cout << std::endl;

	std::cout << std::endl;
	b.highFivesGuys();
	std::cout << std::endl;
	return 0;
}