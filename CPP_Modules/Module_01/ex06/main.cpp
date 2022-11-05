/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:08:06 by aseptimu          #+#    #+#             */
/*   Updated: 2022/04/26 18:09:13 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv) {
	Harl harl;

	if (argc != 2) {
		std::cout << "Wrong number of args" << std::endl;
		return (1);
	}
	harl.complain(argv[1]);
}