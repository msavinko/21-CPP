#include "Fixed.hpp"
#include <cmath>

// Constructors
Fixed::Fixed()
{
	// std::cout << "Default constructor called" << std::endl;
	_fixed = 0;
}

Fixed::Fixed(const Fixed &copy)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(int const raw)
{
	// std::cout << "Int constructor called" << std::endl;
	this->_fixed = raw * (1 << _fractional);
}

Fixed::Fixed(float const num)
{
	// std::cout << "Float constructor called" << std::endl;
	this->_fixed = roundf(num * (1 << _fractional));
}

// Destructor
Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
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
	// std::cout << "Copy assignment operator called" << std::endl;
	_fixed = assign.getRawBits();
	return *this;
}

bool	Fixed::operator>(const Fixed &obj) const
{
	return (this->_fixed > obj._fixed);
}

bool	Fixed::operator<(const Fixed &obj) const
{
	return (this->_fixed < obj._fixed);
}

bool	Fixed::operator>=(const Fixed &obj) const
{
	return (this->_fixed >= obj._fixed);
}

bool	Fixed::operator<=(const Fixed &obj) const
{
	return (this->_fixed <= obj._fixed);
}

bool	Fixed::operator==(const Fixed &obj) const
{
	return (this->_fixed == obj._fixed);
}

bool	Fixed::operator!=(const Fixed &obj) const
{
	return (this->_fixed != obj._fixed);
}

Fixed	Fixed::operator+(const Fixed &add) const
{
	Fixed	ret(add);
	ret.setRawBits(ret.getRawBits() + this->getRawBits());
	return (ret);
}

Fixed	Fixed::operator-(const Fixed &ded) const
{
	Fixed	ret(ded);
	ret.setRawBits(this->getRawBits() - ded.getRawBits());
	return (ret);
}

Fixed	Fixed::operator*(const Fixed &mult) const
{
	Fixed	ret(mult);
	ret.setRawBits(this->getRawBits() * mult.getRawBits() / (1 << _fractional));
	return (ret);
}

Fixed	Fixed::operator/(const Fixed &div) const
{
	Fixed	ret(div);
	ret.setRawBits((long)this->getRawBits() * (1 << _fractional) / div.getRawBits());
	return (ret);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);

	++this->_fixed;

	return (tmp);
}

Fixed &	Fixed::operator++(void)
{
	this->_fixed++;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);

	--this->_fixed;

	return (tmp);
}

Fixed &	Fixed::operator--(void)
{
	this->_fixed--;
	return (*this);
}

Fixed &	Fixed::min(Fixed & comp1, Fixed & comp2) {
	if (comp1.getRawBits() < comp2.getRawBits())
		return (comp1);
	else
		return (comp2);
}

const Fixed &	Fixed::min(const Fixed & comp1, const Fixed & comp2) {
	if (comp1.getRawBits() < comp2.getRawBits())
		return (comp1);
	else
		return (comp2);
}

Fixed &	max(Fixed & comp1, Fixed & comp2)
{
	if (comp1.getRawBits() > comp2.getRawBits())
		return (comp1);
	else
		return (comp2);
}

const Fixed &	Fixed::max(const Fixed & comp1, const Fixed & comp2) {
	if (comp1.getRawBits() > comp2.getRawBits())
		return (comp1);
	else
		return (comp2);
}

std::ostream & operator<<(std::ostream & o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return o;
}

const int Fixed::_fractional = 8;
