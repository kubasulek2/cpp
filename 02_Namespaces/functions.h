#ifndef FUNCTIONS
#define FUNCTIONS

struct Rectangle
{
	double width;
	double height;
};

namespace utils
{
	double area(double width, double height);

	double area(double length);

	double area(Rectangle r);

	double power(double base, int pow);

} // namespace utils

#endif