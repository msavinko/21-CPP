#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template < typename T >
void	swap(T & first, T & second)
{
	T tmp;
	
	tmp = second;
	second = first;
	first = tmp;
}

template < typename T >
T const &	min(T const & first, T const & second)
{
	return (second <= first ? second : first);
}

template < typename T >
T const &	max(T const & first, T const & second)
{
	return (second >= first ? second : first);
}

#endif