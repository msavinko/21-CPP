#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed{
	private:
			int _fpnValue;
			static const int _statBit = 8;
	public:
			//default constructor and destructor
			Fixed( void );
			~Fixed( void );

			//copy constructor
			Fixed(const Fixed & fixed);

			//copy assignment operator overload
			Fixed & operator=(const Fixed & fixed);

			int getRawBits(void) const;
			void setRawBits(int const raw);

			//constructor takes a const int
			Fixed(const int num);
			//constructor takes a const float
			Fixed(const float num);
			float toFloat( void ) const;
			int toInt( void ) const;

			//overload operators
			bool operator>(const Fixed & fixed) const;
			bool operator<(const Fixed & fixed) const;
			bool operator>=(const Fixed & fixed) const;
			bool operator<=(const Fixed & fixed) const;
			bool operator==(const Fixed & fixed) const;
			bool operator!=(const Fixed & fixed) const;

			Fixed operator+(const Fixed & fixed) const;
			Fixed operator-(const Fixed & fixed) const;
			Fixed operator*(const Fixed & fixed) const;
			Fixed operator/(const Fixed & fixed) const;
			//4 increment/decrement
			Fixed &operator++(void);
     		Fixed operator++(int);
     		Fixed &operator--(void);
      		Fixed operator--(int);

			//overload member functions
			static Fixed & min(Fixed &one, Fixed &two); 					//return reference to the smallest one
			static const Fixed & min(const Fixed &one, const Fixed &two);	//return const reference to the smallest one
			static Fixed & max(Fixed &one, Fixed &two);						//return reference to the smallest one
			static const Fixed & max(const Fixed &one, const Fixed &two);	//return constreference to the smallest one
};

std::ostream & operator<<(std::ostream & o, Fixed const & fixed);

#endif