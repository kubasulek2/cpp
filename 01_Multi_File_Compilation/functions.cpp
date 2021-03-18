#include "functions.h"

double area(double width, double height) { return width * height; };

double area(double length) { return length * length; }

double area(Rectangle r) { return r.width * r.height; }

double power(double base, int pow)
{
	int total = 1;
	for (int i = 0; i < pow; i++)
	{
		total *= base;
	}
	return total;
};
