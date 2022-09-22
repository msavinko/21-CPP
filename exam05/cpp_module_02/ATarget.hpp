#pragma once

#include "ASpell.hpp"

class ASpell;

class ATarget
{
	private:
		std::string type;
	public:
		ATarget(std::string type)
		{
			this->type = type;
		}
		virtual ~ATarget() {}

		std::string getType() const
		{
			return type;
		}

		void getHitBySpell(ASpell &spell);
		virtual ATarget *clone() const = 0;
};