/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 13:08:17 by aseptimu          #+#    #+#             */
/*   Updated: 2022/05/08 18:32:40 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	int		arr[6] = {4, 8, 15, 16, 23, 42};
	char	c[] = {'a', 'b', 'c', 'd'};
	double	d[] = {3.0f, 5.5f, 2.0f};

	iter<int>(arr, 6, &printer);
	std::cout << std::endl;
	iter(arr, sizeof(arr)/sizeof(int), &printer);
	std::cout << std::endl;
	iter(c, sizeof(c), &printer);
	std::cout << std::endl;
	iter(d, sizeof(d) / sizeof(double), &printer);
	std::cout << std::endl;
	return (0);
}