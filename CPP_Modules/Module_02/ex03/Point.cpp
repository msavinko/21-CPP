#include "Point.hpp"

// Constructors
Point::Point() : _x(0), _y(0) { }

Point::Point(const Point &copy) : _x(copy.getX()), _y(copy.getY()) { }

Point::Point(float const x, float const y) : _x(x), _y(y){ }

// Destructor
Point::~Point()
{
}


// Operators
Point & Point::operator=(const Point &assign)
{
	(void)assign;
	return *this;
}


// Getters / Setters
Fixed const Point::getX() const
{
	return _x;
}
Fixed const Point::getY() const
{
	return _y;
}
