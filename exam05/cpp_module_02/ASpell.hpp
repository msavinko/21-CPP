#pragma once

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
	private:
		std::string name;
		std::string effects;
	public:
		ASpell(std::string name, std::string effects)
		{
			this->name = name;
			this->effects = effects;
		}
		virtual ~ASpell() {}

		std::string getName() const
		{
			return name;
		}
		std::string getEffects() const
		{
			return effects;
		}

		void launch(ATarget &target);
		virtual ASpell *clone() const = 0;
};