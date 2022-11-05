#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	public:
		// Constructors
		Fixed();
		Fixed(const Fixed &copy);
		Fixed(int const raw);
		Fixed(float const num);
		
		// Destructor
		~Fixed();
		
		// Operators
		Fixed & operator=(const Fixed &assign);

		bool	operator>(const Fixed &obj) const;
		bool	operator<(const Fixed &obj) const;
		bool	operator>=(const Fixed &obj) const;
		bool	operator<=(const Fixed &obj) const;
		bool	operator==(const Fixed &obj) const;
		bool	operator!=(const Fixed &obj) const;

		Fixed	operator+(const Fixed &add) const;
		Fixed	operator-(const Fixed &ded) const;
		Fixed	operator*(const Fixed &mult) const;
		Fixed	operator/(const Fixed &div) const;

		Fixed 	operator++(int);
		Fixed &	operator++(void);
		Fixed	operator--(int);
		Fixed &	operator--(void);

		static Fixed &	min(Fixed & comp1, Fixed & comp2);
		static const Fixed &	min(const Fixed & comp1, const Fixed & comp2);
		static Fixed &	max(Fixed & comp1, Fixed & comp2);
		static const Fixed &	max(const Fixed & comp1, const Fixed & comp2);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;
		
	private:
		int					_fixed;
		static const int	_fractional;
		
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif
