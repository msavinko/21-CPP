#include "Point.hpp"


Point::Point() {
}

Point::Point(const float x, const float y): __x(x), __y(y) {
}

Point::Point(const Point &copy): __x(copy.getX()), __y(copy.getY()){
}


Point &Point::operator=(const Point &other) {
	if (this == &other)
		return *this;
	/// getters
	return *this;
}

const Fixed	&Point::getX(void) const
{
	return (this->__x);
}

const Fixed	&Point::getY(void) const
{
	return (this->__y);
}

Point::~Point() {
}

std::ostream	&operator<<(std::ostream &o, Point const point)
{
	o << "x: " << point.getX() << " / y: " << point.getY() << std::endl;
	return (o);
}