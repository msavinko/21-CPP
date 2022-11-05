/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 15:42:23 by aseptimu          #+#    #+#             */
/*   Updated: 2022/05/06 16:48:58 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdint>
#include "Data.hpp"
#include <iostream>


uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

int	main(void)
{
	Data d;
	uintptr_t pass;
	Data *check;

	d.i = 1000;
	d.c = 'c';
	d.u = 4294967200;
	d.l = -2147483647;
	pass = serialize(&d);
	check = deserialize(pass);
	std::cout << "int: " << check->i << "\nchar: " <<  check->c << "\nunsigned: " << check->u << "\nlong: " << check->l << std::endl;
}