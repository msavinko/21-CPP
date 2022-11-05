/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 18:13:10 by aseptimu          #+#    #+#             */
/*   Updated: 2022/05/08 20:07:50 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

void print(const int& n)
{
	std::cout << " " << n;
}

int main(void)
{
	std::vector<int> vec;
	std::deque<int> deq;

	for (int i = 0; i < 10; i++)
	{
		vec.push_back(i);
		deq.push_front(i * 2);
	}
	std::for_each(vec.begin(), vec.end(), print);
	std::cout << std::endl;
	std::for_each(deq.begin(), deq.end(), print);
	std::cout << std::endl;
	
	try
	{
		std::cout << *(easyfind(vec, 22)) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		std::cout << *(easyfind(deq, 2)) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}