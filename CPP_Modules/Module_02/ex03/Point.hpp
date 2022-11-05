#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include "Fixed.hpp"

class Point
{
	public:
		// Constructors
		Point();
		Point(const Point &copy);
		Point(float const x, float const y);
		
		// Destructor
		~Point();
		
		// Operators
		Point & operator=(const Point &assign);
		
		// Getters / Setters
		Fixed const getX() const;
		Fixed const getY() const;
		
	private:
		Fixed const _x;
		Fixed const _y;
		
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
