/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 18:37:07 by aseptimu          #+#    #+#             */
/*   Updated: 2022/04/25 19:05:48 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    Zombie::zombieHorde( int N, std::string name ) {
	Zombie* zom = new Zombie[N];
	for (int i = 0; i < N; i++) {
		zom[i].setName(name);
	}
	return (zom);
}
