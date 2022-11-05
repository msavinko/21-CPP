/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 18:36:42 by aseptimu          #+#    #+#             */
/*   Updated: 2022/04/25 19:10:14 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	Zombie* zom = NULL;
	zom = (*zom).zombieHorde(10, "Anton");
	for (int i = 0; i < 10; i++) {
		zom[i].announce();
	}

	delete []zom;
	return (0);
}
