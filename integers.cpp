#include <iostream>
#include <climits>

using std::cout;
using std::endl;





/* Void function or procedures */

// function overload
void print(int num)
{
	cout << "Integer " << num << endl;
}
void print(double num)
{
	cout << "Double " << num << endl;
}
void print(char const *c)
{
	cout << "Character " << c << endl;
}

// In every program there must be function called main which will be automatically called when process runs
int main()
{
	// type coersion, function returns double but will be turncated to integer
	int x = power(4,4);
	
	// int
	print(x);

	// double
	print(pow(2,3));
	
	// char
	print("ten");
	
	return EXIT_SUCCESS;
}

/* Function (returns a value) */
double power(double base, int exponent){
	if(exponent == 0) return base;
	double result = 1;
	for (int i = 1; i < exponent; i++)
	{
		result = result * base;
	}

	// ternary operator
	return exponent < 0 ? (1 / result) : result;

}



