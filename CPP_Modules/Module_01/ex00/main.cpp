/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:02:10 by aseptimu          #+#    #+#             */
/*   Updated: 2022/04/25 18:33:48 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	Zombie* zom = NULL;
	zom = (*zom).newZombie("Anton");
	zom->announce();
	delete zom;

	(*zom).randomChump("Sanya");	
	return (0);
}
