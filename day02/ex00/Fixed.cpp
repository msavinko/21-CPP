#include "Fixed.hpp"

// Fixed::Fixed(): _fpnValue(0){
// 	std::cout << "Default constructor called\n";
// }

// Fixed::Fixed(const Fixed &fixed) : _fpnValue(fixed._fpnValue){
// 	std::cout << "Copy constructor called\n";
// }

// Fixed &Fixed::operator=(const Fixed &fixed){
// 	std::cout << "Copy assignment operator called\n";
// 	if (this == &fixed)
// 		return *this;
// 	this->_fpnValue = fixed.getRawBits();
// 	return *this;
// }

// Fixed::~Fixed(){
// 	std::cout << "Destructor called\n";
// }

// int Fixed::getRawBits(void) const{
// 	std::cout << "getRawBits member function called\n";
// 	return (this->_fpnValue);
// }

// void Fixed::setRawBits(int const raw){
// 	this->_fpnValue = raw;
// }

Fixed::Fixed(void) {
	std::cout << "Default constructor called" << std::endl;
    _fpnValue = 0;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy){
	std::cout << "Copy constructor called" << std::endl;
    _fpnValue = copy.getRawBits();
}

Fixed &Fixed::operator = (const Fixed& op) {
	std::cout << "Assignation operator called" << std::endl;
    if (this == &op)
        return *this;
    _fpnValue = op.getRawBits();
    return *this;
}

int		Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
    return _fpnValue;
}

void	Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	// if (raw < pow(2, 31 - _bits) && raw > pow(2, 31 - _bits) * (-1) - 1) {
		_fpnValue = raw /* * (1 << _bits) */;
	// } else {
	// 	std::cout << "Overflow error" << std::endl;
	// }
}
