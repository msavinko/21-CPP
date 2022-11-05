/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 17:12:53 by aseptimu          #+#    #+#             */
/*   Updated: 2022/05/06 18:19:07 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <random>

Base * generate(void)
{
	std::random_device rd; 
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(0, 2);
	int i = distrib(gen);
	if (i % 3 == 0)
	{
		std::cout << "A class generaetd" << std::endl;
		return dynamic_cast<Base *>(new A());
	}
	else if (i % 3 == 1)
	{
		std::cout << "B class generaetd" << std::endl;
		return dynamic_cast<Base *>(new B()); 
	}
	else if (i % 3 == 2)
	{
		std::cout << "C class generaetd" << std::endl;
		return dynamic_cast<Base *>(new C());
	}
	return NULL;
}

void identify(Base* p)
{
	A *a;
	B *b;
	C *c;

	a = dynamic_cast<A *>(p);
	if (a != NULL)
		std::cout << "HEY! This is A class pointer!" << std::endl;
	b = dynamic_cast<B *>(p);
	if (b != NULL)
		std::cout << "HEY! This is B class pointer!" << std::endl;
	c = dynamic_cast<C *>(p);
	if (c != NULL)
		std::cout << "HEY! This is C class pointer!" << std::endl;
}

void identify(Base& p)
{
	A a;
	B b;
	C c;

	try
	{
		A a = dynamic_cast<A &>(p);
		std::cout << "HEY! This is A class reference!" << std::endl;
	}
	catch(const std::exception& e) {}
	try
	{
		B b = dynamic_cast<B &>(p);
		std::cout << "HEY! This is B class reference!" << std::endl;
	}
	catch(const std::exception& e) {}
	try
	{
		C c = dynamic_cast<C &>(p);
		std::cout << "HEY! This is C class reference!" << std::endl;
	}
	catch(const std::exception& e) {}
}

int main() {
	Base *p;
	for (int i = 0; i < 10; ++i) {

		p = generate();
		if (p != NULL)
		{
			identify(p);
			identify(*p);
		}

		std::cout << std::endl;
		delete p;
	}
	return (0);
}