/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 11:48:25 by aseptimu          #+#    #+#             */
/*   Updated: 2022/05/08 14:58:59 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

const char* Span::OutOfRange::what() const throw()
{
	return "Maximum elements in array";
}

const char* Span::TooSmall::what() const throw()
{
	return "Can't compare <2 elements";
}

// Constructors
Span::Span() : _vec(0, 0) {
	_vec.reserve(0);
}

Span::Span(const Span & copy) {
	this->_vec.reserve(copy._vec.capacity());
	std::copy(copy._vec.begin(), copy._vec.end(), _vec.begin());
}

Span::Span(const unsigned int & n) : _vec(0, 0)
{
	_vec.reserve(n);
}

// Destructor
Span::~Span()
{
}

// Getters
const std::vector<int>&	Span::getData(void) const
{
	return _vec;
} 

void	Span::addNumber(int n)
{
	if (_vec.capacity() <= _vec.size())
		throw Span::OutOfRange();
	_vec.push_back(n);
}

int	Span::shortestSpan()
{
	if (_vec.size() < 2)
		throw Span::TooSmall();
	std::vector<int> tmp(_vec);
	int	min;
	int	tmpVal;
	std::vector<int>::iterator it;

	std::sort(tmp.begin(), tmp.end());
	min = std::numeric_limits<int>::max();
	for (it = (tmp.begin() + 1); it != tmp.end(); it++)
	{
		tmpVal = std::abs(*(it) - *(it - 1));
		if (tmpVal < min)
			min = tmpVal;
	}
	return (min);
}

int	Span::longestSpan()
{
	if (_vec.size() < 2)
		throw Span::TooSmall();
	std::pair<std::vector<int>::iterator, std::vector<int>::iterator> it;
	it = std::minmax_element(_vec.begin(), _vec.end());
	return (*it.second - *it.first);
}

// Operator

Span& Span::operator=(const Span& assign)
{
	if (this != &assign)
	{
		_vec.clear();
		this->_vec.reserve(assign._vec.capacity());
		std::copy(assign._vec.begin(), assign._vec.end(), _vec.begin());
	}
	return (*this);
}