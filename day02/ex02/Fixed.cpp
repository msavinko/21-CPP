#include "Fixed.hpp"

Fixed::Fixed( void ){ //default constructor
	this->_fpnValue = 0;
}
Fixed::~Fixed( void ){ //default destructor
}
Fixed::Fixed(const Fixed & fixed){ //copy constructor
	*this = fixed;
}
Fixed & Fixed::operator=(const Fixed & fixed){
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
}
Fixed::Fixed(const float num){
	this->_fpnValue = roundf(num * (1 << this->_statBit)); //округляем флот к инту. 2,5 = 3
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

Fixed Fixed::operator+(const Fixed & fixed) const{
	Fixed result(this->toFloat() + fixed.toFloat());
	return (result);
}
Fixed Fixed::operator-(const Fixed & fixed) const{
	Fixed result(this->toFloat() - fixed.toFloat());
	return (result);
}

Fixed Fixed::operator * (const Fixed & fixed) const {
	Fixed result(this->toFloat() * fixed.toFloat());
	return (result);
}
Fixed Fixed::operator/(const Fixed & fixed) const{
	Fixed result(this->toFloat() / fixed.toFloat());
	return (result);
}

bool Fixed::operator>(const Fixed & fixed) const{
	return -_fpnValue > fixed.getRawBits();
}
bool Fixed::operator<(const Fixed & fixed) const{
	return -_fpnValue < fixed.getRawBits();
}
bool Fixed::operator>=(const Fixed & fixed) const{
	return -_fpnValue >= fixed.getRawBits();
}
bool Fixed::operator<=(const Fixed & fixed) const{
	return -_fpnValue <= fixed.getRawBits();
}
bool Fixed::operator==(const Fixed & fixed) const{
	return -_fpnValue == fixed.getRawBits();
}
bool Fixed::operator!=(const Fixed & fixed) const{
	return -_fpnValue != fixed.getRawBits();
}
//increment and decrement
Fixed	&Fixed::operator++(void) {
    _fpnValue++;
    return (*this);
}

Fixed	Fixed::operator++(int) {
    Fixed tmp(*this);
    operator++();
    return (tmp);
}

Fixed	&Fixed::operator--(void) {
    _fpnValue--;
    return (*this);
}

Fixed	Fixed::operator--(int) {
    Fixed tmp(*this);
    operator--();
    return (tmp);
}
/* min & max */
Fixed &Fixed::min(Fixed &one, Fixed &two){
	return one < two ? one : two;
}

const  Fixed &Fixed::min(const Fixed &one, const Fixed &two){
	return one < two ? one : two;
}

Fixed &Fixed::max(Fixed &one, Fixed &two){
	return one > two ? one : two;
}

const Fixed &Fixed::max(const Fixed &one, const Fixed &two){
	return one > two ? one : two;
}