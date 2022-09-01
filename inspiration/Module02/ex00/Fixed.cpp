/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemmon <lemmon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:47:52 by lemmon            #+#    #+#             */
/*   Updated: 2022/08/31 12:23:28 by lemmon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::__val_bits = 8;

Fixed::Fixed() {
	__num = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj) {
	std::cout << "Copy constructor called" << std::endl;
	__num = obj.__num;
}

Fixed& Fixed::operator=(const Fixed &other) {
	std::cout << "Fixed Assignation operator called" << std::endl;
	if (this == &other)
		return *this;
	if (this != &other)
		this->__num = other.getRawBits();
	return *this; 
}


Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return __num;
}

void Fixed::setRawBits( int const raw ) {
	__num = raw;
	std::cout << "setRawBits member function called" << std::endl;
}