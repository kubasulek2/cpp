#include <iostream>
#include <string>

class Point
{
public:
	double x;
	double y;

	/* Plus operator */
	Point operator+(Point p)
	{
		Point new_point;
		new_point.x = x + p.x;
		new_point.y = y + p.y;
		return new_point;
	}

	/* Comparison operator */
	bool operator==(Point p)
	{
		return x == p.x && y == p.y;
	}

	Point(double x = 0, double y = 0)
	{
		this->x = x;
		this->y = y;
	}

};

/* Insertion operator */
std::ostream &operator<<(std::ostream &output, const Point p)
{
	output << "Punkt o pozycji x: " << p.x << ", y: " << p.y << std::endl;
	return output;
}
/* Extraction operator */
std::istream &operator>>(std::istream &input, Point &p)
{
	input >> p.x >> p.y;
	return input;
}

int main()
{
	Point a, b;
	a.x = 21;
	a.y = -12;
	b.x = 4;
	b.y = 3;
	Point sum = a + b;
	std::cout << sum.x << "   " << sum.y << std::endl;

	if (a == b)
		std::cout << "Points are the same" << std::endl;

	std::cin >> a;  
	std::cout << a;

	return 0;
}
