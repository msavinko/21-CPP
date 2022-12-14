#include "Fixed.hpp"

int	main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed(10.2f) / Fixed(10.2f) << std::endl;
	std::cout << Fixed::min(Fixed(1000), Fixed(100)) << std::endl;
	std::cout << Fixed::max(Fixed(100), Fixed(101)) << std::endl;
	std::cout << Fixed(10.2f) / Fixed(1.0f) << std::endl;
	return 0;
}
