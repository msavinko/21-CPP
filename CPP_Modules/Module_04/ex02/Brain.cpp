#include "Brain.hpp"

// Constructors
Brain::Brain()
{
	std::cout << "Default Brain constructor called" << std::endl;
	for (int i = 0; i < _iNum; i++)
		ideas[i] = "NO IDEAS";
}

Brain::Brain(const std::string ideas)
{
	std::cout << "Field Brain constructor called" << std::endl;
	for (int i = 0; i < _iNum; i++)
		this->ideas[i] = ideas;
}

Brain::Brain(const Brain & copy)
{
	std::cout << "Copy Brain constructor called" << std::endl;
	for (int i = 0; i < _iNum; i++)
		this->ideas[i] = copy.ideas[i];
}

// Destructor
Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

// Getters
int Brain::getINum()
{
	return _iNum;
}	

const std::string *Brain::getIdeas() const {

    return &(this->ideas[0]);
}

void	Brain::printIdeas() const
{
	for (int i = 0; i < _iNum; i++)
	{
			std::cout << "Idea " << i + 1 << ": " << ideas[i] << "; ";
			if ((i + 1) % 10 == 0)
				std::cout << std::endl;
	}
	// std::cout << std::endl;
}

void	Brain::setIdeas(const std::string ideas)
{
	for (int i = 0; i < _iNum; i++)
		this->ideas[i] = ideas;
}

// Operators
Brain & Brain::operator=(const Brain & assign)
{
	for (int i = 0; i < _iNum; i++)
		this->ideas[i] = assign.ideas[i];
	return (*this);
}
