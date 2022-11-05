#include "Fixed.hpp"
#include <cmath>

// Constructors
Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_fixed = 0;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(int const raw)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixed = raw * (1 << _fractional);
}

Fixed::Fixed(float const num)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixed = roundf(num * (1 << _fractional));
}

// Destructor
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

// Getters && setters
int	Fixed::getRawBits(void) const
{
	return _fixed;
}

void	Fixed::setRawBits(int const raw)
{
	_fixed = raw;
}


float	Fixed::toFloat(void) const
{
	return (static_cast<float> (this->_fixed) / static_cast<float> (1 << _fractional));
}

int		Fixed::toInt(void) const
{
	return (this->_fixed  / (1 << _fractional));
}

// Operators
Fixed & Fixed::operator=(const Fixed &assign)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_fixed = assign.getRawBits();
	return *this;
}

std::ostream & operator<<(std::ostream & o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return o;
}

const int Fixed::_fractional = 8;
