#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iostream>
# include <vector>
# include <deque>

template < typename T >
typename T::iterator	easyfind(T& container, const int value)
{
	typename T::iterator ret;
	ret = std::find(container.begin(), container.end(), value);
	if (ret == container.end())
		throw std::out_of_range("Value " + std::to_string(value) + " not found");
	return (ret);
}

#endif