/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 19:27:40 by aseptimu          #+#    #+#             */
/*   Updated: 2022/04/25 20:21:09 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


HumanB::HumanB( std::string name ) {
	this->_name = name;
}

Weapon *HumanB::getWeapon() const {
	return _weapon;
}

void HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
}

HumanB::~HumanB() {

}

void	HumanB::attack() {
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

