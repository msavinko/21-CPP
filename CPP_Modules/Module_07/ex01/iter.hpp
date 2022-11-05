/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 13:08:36 by aseptimu          #+#    #+#             */
/*   Updated: 2022/05/08 18:32:07 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <cstddef>

template <typename T>
void	iter(T * arr, std::size_t len, void (*f)(T const & elem))
{
	for (std::size_t i = 0; i < len; i++)
		f(arr[i]);
}

template <typename T>
void	printer(T & elem)
{
	std::cout << elem << " ";
}
#endif