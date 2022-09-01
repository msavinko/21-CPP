#include "Point.hpp"

bool bsp(const Point a, const Point b, const Point c, const Point point);

int main(void)
{
	{
	const Point a(0,0);
	const Point b(10, 0);
	const Point c(0, 10);
	const Point point(1, 1);

	std::cout << "a - x: " << a.getX() << " / y: " << a.getY() << std::endl;
	std::cout << "b - x: " << b.getX() << " / y: " << b.getY() << std::endl;
	std::cout << "c - x: " << c.getX() << " / y: " << c.getY() << std::endl;
	std::cout << "point - x: " << point.getX() << " / y: " << point.getY() << std::endl;
	if (bsp(a, b, c, point) == true)
		std::cout << "\033[32mTRUE\033[0m" << std::endl;
	else
		std::cout << "\033[31mFALSE\033[0m" << std::endl;
	}
	std::cout << "\n---------------------------------------------------------------------\n" << std::endl;
	{
	Point a(-1.5, -1.5);
	Point b(2.5, 2.5);
	Point c(-1, -2);
	Point point(8.5, -9);

	std::cout << "a - x: " << a.getX() << " / y: " << a.getY() << std::endl;
	std::cout << "b - x: " << b.getX() << " / y: " << b.getY() << std::endl;
	std::cout << "c - x: " << c.getX() << " / y: " << c.getY() << std::endl;
	std::cout << "point - x: " << point.getX() << " / y: " << point.getY() << std::endl;

	if (bsp(a, b, c, point) == true)
		std::cout << "\033[32mTRUE\033[0m" << std::endl;
	else
		std::cout << "\033[31mFALSE\033[0m" << std::endl;
	}
	std::cout << "\n---------------------------------------------------------------------\n" << std::endl;
	{
	Point a(-1.5, -1.5);
	Point b(2.5, 2.5);
	Point c(-1, -2);
	Point point(-1.5, -1.5);

	std::cout << "a - x: " << a.getX() << " / y: " << a.getY() << std::endl;
	std::cout << "b - x: " << b.getX() << " / y: " << b.getY() << std::endl;
	std::cout << "c - x: " << c.getX() << " / y: " << c.getY() << std::endl;
	std::cout << "point - x: " << point.getX() << " / y: " << point.getY() << std::endl;

	if (bsp(a, b, c, point) == true)
		std::cout << "\033[32mTRUE\033[0m" << std::endl;
	else
		std::cout << "\033[31mFALSE\033[0m" << std::endl;
	}
	return (0);
}
