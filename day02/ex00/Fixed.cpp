#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called\n";
	this->_fpnValue = 0;
}

Fixed::~Fixed(){
	std::cout << "Destructor called\n";
}

Fixed::Fixed(const Fixed &fixed){
	std::cout << "Copy constructor called\n";
	this->_fpnValue = fixed._fpnValue;
}

Fixed &Fixed::operator=(const Fixed &fixed){
	std::cout << "Copy assignment operator called\n";
	if (this == &fixed)
		return *this;
	this->setRawBits(fixed.getRawBits());
	return *this;
}

int Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called\n";
	return (this->_fpnValue);
}

void Fixed::setRawBits(int const raw){
	this->_fpnValue = raw;
}
