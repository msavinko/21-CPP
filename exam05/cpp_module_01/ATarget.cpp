#include "ATarget.hpp"

void ATarget::getHitBySpell(ASpell &spell)
{
	std::cout << type << " has been " << spell.getEffects() << "!\n";
}