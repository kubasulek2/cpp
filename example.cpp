#include <iostream>
#include <climits>
#include <cmath>
using std::cin;
using std::endl;
using std::pow;

/* Declarations */

double power(double, int);
void log(char[]);

/* Declarations Ends */

int main()
{
	// Define a comment
	unsigned char x = 'ą';
	using std::cout;
	cout << x << endl;
	cout << (int)x << endl;
	return EXIT_SUCCESS;
}

double power(double base, int exponent){
	if(exponent == 0) return base;
	double result = 1;
	for (int i = 1; i < exponent; i++)
	{
		result = result * base;
	}

	return exponent < 0 ? (1 / result) : result;
	
	
}


