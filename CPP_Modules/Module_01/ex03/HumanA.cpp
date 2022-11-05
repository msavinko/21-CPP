/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 19:27:16 by aseptimu          #+#    #+#             */
/*   Updated: 2022/04/25 20:22:43 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) {
	this->_name = name;
	this->_weapon = &weapon;
}

Weapon *HumanA::getWeapon() const {
	return _weapon;
}

void HumanA::setWeapon(Weapon &weapon) {
	_weapon = &weapon;
}

HumanA::~HumanA() {
	
}

void	HumanA::attack() {
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}
