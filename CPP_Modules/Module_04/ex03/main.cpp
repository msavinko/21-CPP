#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main() 
{
	IMateriaSource* src = new MateriaSource(); 
	src->learnMateria(new Ice()); 
	src->learnMateria(new Cure());
	std::cout << std::endl;

	ICharacter* me = new Character("me");
	
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

	ICharacter* bob = new Character("bob"); 
	
	std::cout << std::endl;
	me->use(0, *bob);
    me->use(1, *bob);
	std::cout << std::endl;

	delete bob; 
	delete me; 
	delete src;

	std::cout << std::endl;
	std::cout << "* MATERIASOURCE CLASS CHECK: DEEP COPY *"
			<< std::endl;
	std::cout << std::endl;
	MateriaSource ms;
	
	ms.learnMateria(new Ice);
	ms.learnMateria(new Cure);

	{
		MateriaSource copy;
		copy = ms;
	}
	Character man("Man");
	Character tar("Target");

	tmp = ms.createMateria("ice");
	man.equip(tmp);
	tmp = ms.createMateria("cure");
	man.equip(tmp);
	tmp = ms.createMateria("cure");
	man.equip(tmp);
	tmp = ms.createMateria("ice");
	man.equip(tmp);

	std::cout << std::endl;
	for (int i = 0; i < SSIZE; i++)
		std::cout << i << " ", man.use(i, tar);
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << " * DEEP COPY CHECK: HARD LVL * "
		<< std::endl;
	std::cout << std::endl;
	
	Character Sam("Sam");
	std::cout << " -> Sam equiption: " << std::endl;
	for (int i = 0; i < SSIZE - 1; i++)
	{
		if (i % 2 == 0)
			Sam.equip(new Ice);
		else
			Sam.equip(new Cure);
	}
	
	std::cout << std::endl;
	Character Slime("Slime");
	std::cout << " -> Slime equiption: " << std::endl;
	for (int i = 0; i < SSIZE; i++) Slime.equip(new Ice);
	std::cout << std::endl;

	Character Sun(Sam);
	std::cout << std::endl;
	std::cout << " -> Copy constructor RESULT: " << std::endl;
	for (int i = 0; i < SSIZE; i++) Sun.use(i, Slime);
	std::cout << " -> Operator overloading BEFORE: " << std::endl;
	for (int i = 0; i < SSIZE; i++) Sun.use(i, Slime);
	std::cout << std::endl;
	Sun = Slime;
	std::cout << std::endl;
	std::cout << " -> Operator overloading RESULT: " << std::endl;
	for (int i = 0; i < SSIZE; i++) Sun.use(i, Slime);
	std::cout << std::endl;

	std::cout << std::endl;
	for (int i = 0; i < SSIZE; i++) Sam.use(i, Slime);
	std::cout << std::endl;
	for (int i = 0; i < SSIZE; i++) Slime.use(i, Sam);
	std::cout << std::endl;

	return 0; 
}