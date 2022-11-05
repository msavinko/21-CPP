/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 15:09:16 by aseptimu          #+#    #+#             */
/*   Updated: 2022/04/24 15:03:56 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void) {
	std::string str;
	PhoneBook	phones;

	while (1)
	{
		std::cout << "Enter command: ";
		std::cin >> str;
		if (std::cin.fail())
			exit(1);
		if (!str.compare("ADD"))
			phones.setContact();
		else if (!str.compare("SEARCH"))
			phones.getContact();
		else if (!str.compare("EXIT"))
			return (0);
		else
			std::cout << "WRONG COMMAND" << std::endl;
	}
}