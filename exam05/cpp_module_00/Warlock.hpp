#pragma once

#include <iostream>

class Warlock
{
	private:
		std::string name;
		std::string title;
	public:
		Warlock(std::string name, std::string title)
		{
			this->name = name;
			this->title = title;
			std::cout << name << ": This looks like another boring day.\n";
		}
		~Warlock()
		{
			std::cout << name << ": My job here is done!\n";
		}

		std::string getName() const
		{
			return name;
		}
		std::string getTitle() const
		{
			return title;
		}
		void setTitle(std::string title)
		{
			this->title = title;
		}

		void introduce() const
		{
			std::cout << name << ": I am " << name << ", " << title << "!\n";
		}
};