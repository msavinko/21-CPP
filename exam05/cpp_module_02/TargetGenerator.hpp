#pragma once

#include "ATarget.hpp"
#include <map>
class TargetGenerator
{
	private:
		std::map<std::string, ATarget *> map;
	public:
		TargetGenerator() {}
		~TargetGenerator() {}

		void learnTargetType(ATarget *target)
		{
			map[target->getType()] = target;
		}
		void forgetTargetType(std::string target)
		{
			map.erase(target);
		}
		ATarget *createTarget(std::string target)
		{
			if (map[target])
				return map[target];
			return 0;
		}
};