#include <iostream>

template <typename T>

T add(T a, T b)
{
	return a + b;
}

int main()
{

	std::cout << add<double>(1., 2.22) << std::endl;
	/* code */
	return 0;
}
