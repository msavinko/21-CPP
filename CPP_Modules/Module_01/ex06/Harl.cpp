/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:08:22 by aseptimu          #+#    #+#             */
/*   Updated: 2022/04/26 18:20:40 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
	message[0] = &Harl::debug;
	message[1] = &Harl::info;
	message[2] = &Harl::warning;
	message[3] = &Harl::error;
}

Harl::~Harl() {

}

void Harl::debug( void ) {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger." << std::endl;
	std::cout << "I really do!" << std::endl;
}

void Harl::info( void ) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning( void ) {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void ) {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain( std::string level ) {
	int	i = 0;
	while (i < 5 && level.compare(harl[i++])) {}
	switch (i)
	{
	case 5:
		std::cout << "Bad message" << std::endl;
		break;
	
	default:
		while (i < 5) {
			(this->*message[i - 1])();
			i++;
		}
		break;
	}
}


const std::string	Harl::harl[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
