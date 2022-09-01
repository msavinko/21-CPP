/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemmon <lemmon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:48:11 by lemmon            #+#    #+#             */
/*   Updated: 2022/08/29 15:48:38 by lemmon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): __num(0){
}

Fixed::Fixed(const int val) {
	__num = val <<__valBits;
}

Fixed::Fixed(const float val) {
	__num = (int)roundf(val * (1 << __valBits));
}

Fixed::~Fixed() {
}

Fixed::Fixed(const Fixed& other) {
	*this = other;
}
		
Fixed& Fixed::operator=(const Fixed& other) {
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

Fixed	Fixed::operator+(const Fixed& other) const {
	Fixed	result(this->toFloat() + other.toFloat());
	return (result);
}

Fixed	Fixed::operator-(const Fixed& other) const {
	Fixed	result(this->toFloat() - other.toFloat());
	return (result);
}

Fixed	Fixed::operator*(const Fixed& other) const {
	Fixed	result(this->toFloat() * other.toFloat());
	return (result);
}

Fixed	Fixed::operator/(const Fixed& other) const {
	Fixed	result(this->toFloat() / other.toFloat());
	return (result);
}

bool	Fixed::operator<(const Fixed& other) const {
	return (__num < other.getRawBits());
}

bool	Fixed::operator>(const Fixed& other) const {
	return (other.getRawBits() < __num);
}

bool	Fixed::operator<=(const Fixed& other) const {
	return (!(__num > other.getRawBits())); // не больше
}

bool	Fixed::operator>=(const Fixed& other) const {
	return (!(__num < other.getRawBits())); // не меньше
}

bool	Fixed::operator==(const Fixed& other) const {
	return (!(__num < other.getRawBits() || __num > other.getRawBits()));
}

bool	Fixed::operator!=(const Fixed& other) const {
	return (!(__num == other.getRawBits()));
}


Fixed	&Fixed::operator++() {
	__num++;
	return (*this);
}

Fixed	&Fixed::operator--() {
	__num--;
	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed	tmp(*this);
	operator++();
	return(tmp);
}

Fixed	Fixed::operator--(int) {
	Fixed	tmp(*this);
	operator--();
	return(tmp);
}

Fixed &Fixed::min(Fixed &first, Fixed &second) {
	if (first.toFloat() <= second.toFloat())
		return (first);
	else
		return (second);
}

const Fixed &Fixed::min(Fixed const &first, Fixed const &second) {
	if (first.toFloat() <= second.toFloat())
		return (first);
	else
		return (second);
}

Fixed &Fixed::max(Fixed &first, Fixed &second) {
	if (first.toFloat() >= second.toFloat())
		return (first);
	else
		return (second);
}

const Fixed &Fixed::max(Fixed const &first, const Fixed &second) {
	if (first.toFloat() >= second.toFloat())
		return (first);
	else
		return (second);
}

std::ostream	&operator<<(std::ostream &out, Fixed const &fixed)
{
	out << fixed.toFloat();
	return (out);
}
