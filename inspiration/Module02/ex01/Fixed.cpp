/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemmon <lemmon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:48:02 by lemmon            #+#    #+#             */
/*   Updated: 2022/08/29 15:48:03 by lemmon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	__num = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int val) {
	std::cout << "Int constructor called" << std::endl;
	__num = val <<__valBits;
}

Fixed::Fixed(const float val) {
	std::cout << "Float constructor called" << std::endl;
	__num = roundf(val * (1 << __valBits));
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) {
	*this = other;
	std::cout << "Copy constructor called" << std::endl;
}

		
Fixed& Fixed::operator=(const Fixed& other) {
	std::cout << "Fixed Assignation operator called" << std::endl;
	if (this == &other)
		return *this;
	if (this != &other)
		this->__num = other.getRawBits();
	return *this;
}

int		Fixed::getRawBits(void) const {
	return __num;
}
void	Fixed::setRawBits(int const raw) {
	__num = raw;
}

float	Fixed::toFloat(void)const
{
	return ((float)__num / (float)(1 << __valBits));
}

int	Fixed::toInt(void)const
{
	return (this->__num >> __valBits);
}

std::ostream	&operator<<(std::ostream &out, Fixed const &fixed)
{
	out << fixed.toFloat();
	return (out);
}