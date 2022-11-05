/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 11:47:54 by aseptimu          #+#    #+#             */
/*   Updated: 2022/05/08 15:12:17 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() 
{
	Span s = Span(5);

	s.addNumber(6);
	s.addNumber(3);
	s.addNumber(17);
	s.addNumber(9);
	s.addNumber(11);

	std::cout << s.shortestSpan() << std::endl;
	std::cout << s.longestSpan() << std::endl;

	std::cout << std::endl;

	Span sp = Span(100000);
	
	for (int i = -50000; i <= 49999; i++)
		sp.addNumber(i);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << std::endl;

	std::vector<int>  v;
	Span ssp(9);

	for (int i = 1 ; i < 10 ; i++)
	{
		v.push_back(i * 3);
		std::cout << v[i - 1] << " ";
	}
	std::cout << std::endl;
	ssp.addManyNumbers(std::begin(v), std::end(v));
	std::cout << ssp.shortestSpan() << std::endl;
	std::cout << ssp.longestSpan() << std::endl;

	std::cout << std::endl;

	int a[9] = {3, 6, 9, 12, 15, 18, 23, 24, 27};
	Span sssp(9);

	sssp.addManyNumbers(std::begin(a), std::end(a));
	std::cout << sssp.shortestSpan() << std::endl;
	std::cout << sssp.longestSpan() << std::endl;

	std::cout << std::endl;

	try {
		Span spp(0);
		std::cout << spp.shortestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		Span spp(0);
		std::cout << spp.longestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		Span sppp(0);
		sppp.addNumber(0);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		Span sppp(1);
		int a[2] = {3, 6};
		sppp.addManyNumbers(std::begin(a), std::end(a));
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	return 0;
}