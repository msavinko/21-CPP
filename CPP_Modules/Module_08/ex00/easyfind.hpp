/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 18:13:24 by aseptimu          #+#    #+#             */
/*   Updated: 2022/05/08 20:07:23 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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