#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed{
	private:
			int _fpnValue;
			static const int _statBit = 8;
	public:
			Fixed( void );							//default constructor
			~Fixed( void );
			Fixed(const Fixed & fixed);				//a copy constructor
			Fixed & operator=(const Fixed & fixed);	//a copy assignment operator overload
			int getRawBits(void) const;
			void setRawBits(int const raw);
};

#endif