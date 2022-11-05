/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 12:50:38 by aseptimu          #+#    #+#             */
/*   Updated: 2022/05/07 13:09:36 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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