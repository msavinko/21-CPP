#ifndef POINT_HPP
#define POINT_HPP
#include "Fixed.hpp"

class Point {
	private:
		const Fixed __x;
		const Fixed __y;

	public:
		Point();
		Point(const float x, const float y);
		Point(const Point& copy);
		~Point();
		// оператор перегрузки
		Point& operator=(const Point &other);
		//геттеры, сеттеры
		const Fixed &getX(void)const;
		const Fixed &getY(void)const;
};
bool bsp( Point const a, Point const b, Point const c, Point const point);
std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif