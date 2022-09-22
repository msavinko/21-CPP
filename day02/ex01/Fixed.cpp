#include "Fixed.hpp"

Fixed::Fixed( void ){
	this->_fpnValue = 0;
	std::cout << "Default constructor called\n";
}
Fixed::~Fixed( void ){
	std::cout << "Destructor called\n";
}
Fixed::Fixed(const Fixed & fixed){
	std::cout << "Copy constructor called\n";
	// this->_fpnValue = fixed.getRawBits();
	*this = fixed;
}
Fixed & Fixed::operator=(const Fixed & fixed){
	std::cout << "Copy assignment operator called\n";
	if (this == &fixed)
		return *this;
	this->_fpnValue = fixed.getRawBits();
	return *this;
}
int Fixed::getRawBits(void) const{
	return (this->_fpnValue);
}
void Fixed::setRawBits(int const raw){
	this->_fpnValue = raw;
}

Fixed::Fixed(const int num){
	this->_fpnValue = num * (1 << this->_statBit);
	std::cout << "Int constructor called\n";
}
Fixed::Fixed(const float num){
	this->_fpnValue = roundf(num * (1 << this->_statBit)); //округляем флот к инту. 2,5 = 3
	std::cout << "Float constructor called\n";
}
float Fixed::toFloat( void ) const{
	return ((float)this->_fpnValue / (float)(1 << this->_statBit));
}
int Fixed::toInt( void ) const{
	return(this->_fpnValue >> this->_statBit);
}

std::ostream & operator<<(std::ostream & o, Fixed const & fixed){
	o << fixed.toFloat();
	return o;
}