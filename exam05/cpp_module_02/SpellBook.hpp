#pragma once

#include "ASpell.hpp"
#include <map>

class SpellBook
{
	private:
		std::map<std::string, ASpell *> map;
	public:
		SpellBook() {}
		~SpellBook() {}

		void learnSpell(ASpell *spell)
		{
			map[spell->getName()] = spell;
		}
		void forgetSpell(std::string spell)
		{
			map.erase(spell);
		}
		ASpell *createSpell(std::string spell)
		{
			if (map[spell])
				return map[spell];
			return 0;
		}
};