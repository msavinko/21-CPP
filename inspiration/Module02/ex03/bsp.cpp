#include "Point.hpp"
#include "Fixed.hpp"

static float getArea(const Point p1, const Point p2, const Point p3) {
	float area;

	area = (( p1.getX().toFloat() * ( p2.getY().toFloat() - p3.getY().toFloat()))
			+ ( p2.getX().toFloat() * ( p3.getY().toFloat() - p1.getY().toFloat()))
			+ ( p3.getX().toFloat() * ( p1.getY().toFloat() - p2.getY().toFloat()))) / 2;
	if (area >= 0) 
		return (area);
	else
		return (area * (-1));
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	float d1, d2, d3, d0;
	bool	result = false;

	d0 = getArea(a, b, c);
	d1 = getArea(point, a, b);
	d2 = getArea(point, a, c);
	d3 = getArea(point, c, b);

	if (d1 == 0 || d2 == 0 || d3 == 0)
		result = false;
	else if (d1 + d2 + d3 == d0)
		result = true;
	return result;
}