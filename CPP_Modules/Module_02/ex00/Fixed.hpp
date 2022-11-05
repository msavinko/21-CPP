#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	public:
		// Constructors
		Fixed();
		Fixed(const Fixed &copy);
		
		// Destructor
		~Fixed();
		
		// Operators
		Fixed & operator=(const Fixed &assign);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		
	private:
		int _fixed;
		static const int _fractional;
		
};

#endif
