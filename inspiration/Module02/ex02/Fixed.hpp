/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemmon <lemmon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:48:46 by lemmon            #+#    #+#             */
/*   Updated: 2022/08/29 15:48:47 by lemmon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	private:
		int 				__num;
		static const int	__valBits = 8;

	public:
		// constructors
		Fixed();
		Fixed(const int val);
		Fixed(const float val);
		Fixed(const Fixed& other);
		// overload operator
		Fixed &operator=(const Fixed& other);
		// operators
		Fixed	operator+(const Fixed& other) const;
		Fixed	operator-(const Fixed& other) const;
		Fixed	operator*(const Fixed& other) const;
		Fixed	operator/(const Fixed& other) const;

		bool	operator<(const Fixed& other) const;
		bool	operator>(const Fixed& other) const;
		bool	operator<=(const Fixed& other) const;
		bool	operator>=(const Fixed& other) const;
		bool	operator==(const Fixed& other) const;
		bool	operator!=(const Fixed& other) const;

		//pre-increment/decrement
		Fixed	&operator++(); // возвращает ссылку, не создает копию
		Fixed	&operator--();
		//post-increment/decrement
		Fixed	operator++(int); // возвращает копию
		Fixed	operator--(int); // int - чтобы просто различать префикс и постфикс

		static Fixed &min(Fixed &first, Fixed &second);
		static const Fixed &min(Fixed const &first, Fixed const &second);
		static Fixed &max(Fixed &first, Fixed &second);
		static const Fixed &max(Fixed const &first, const Fixed &second);
		
		// getattr, setattr
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		// other
		float	toFloat( void ) const;
		int		toInt( void ) const;
		// destructor
		~Fixed();
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif