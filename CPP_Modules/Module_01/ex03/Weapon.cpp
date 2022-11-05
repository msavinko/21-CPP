/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 19:26:55 by aseptimu          #+#    #+#             */
/*   Updated: 2022/04/25 20:16:25 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string Weapon::getType() const {
	return type;
}

void Weapon::setType(const std::string t) {
	this->type = t;
}


Weapon::Weapon( std::string t ) {
	this->type = t;
}

Weapon::~Weapon() {
	
}