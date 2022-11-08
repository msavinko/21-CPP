#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <cmath>
# include <cfloat>
# include <limits.h>

class Convert
{
private:
	bool		_err;
	std::string	_input;
	double		_val;

	// Default constructor
	Convert();
public:
	class BadStrException: public std::exception
	{
		const char* what() const throw();
	};

	// Constructors

	Convert(const std::string& input);
	Convert(const Convert& copy);

	// Destructor
	~Convert();

	// Getters
	bool	getErr(void) const;
	std::string	getInput(void) const;
	double	getVal(void) const;

	char	getChar(void) const;
	int		getInt(void) const;
	float	getFloat(void) const;
	double	getDouble(void) const;	

	// Operators
	Convert & operator=(const Convert & assign);
};

std::ostream & operator<<(std::ostream& o, const Convert& c);

#endif