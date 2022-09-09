#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed{
	private:
			int _fpnValue;
			static const int _statBit = 8;
	public:
			Fixed( void );
			~Fixed( void );
			Fixed(const Fixed & fixed);
			Fixed & operator=(const Fixed & fixed);
			int getRawBits(void) const;
			void setRawBits(int const raw);

			Fixed(const int num);
			Fixed(const float num);
			float toFloat( void ) const;
			int toInt( void ) const;
};

std::ostream & operator<<(std::ostream & o, Fixed const & fixed);

#endif