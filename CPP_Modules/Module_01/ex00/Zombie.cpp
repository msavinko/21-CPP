/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 16:10:45 by aseptimu          #+#    #+#             */
/*   Updated: 2022/04/25 18:19:36 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie( void ) {
	return ;
}

Zombie::Zombie( std::string name ) {
	this->name = name;
	return ;
}

Zombie::~Zombie(){
	std::cout << this->name << " is dead" << std::endl;
}

void	Zombie::setName(const std::string &name_) {
	name = name_;
}

void	Zombie::announce( void ) {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
