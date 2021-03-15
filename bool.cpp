#include <iostream>

using std::cout;
using std::endl;


int main()
{
	bool x;

	// will be 0
	cout << x << endl;
	
	// will be converted to 1
	bool y = -12.345;
	
	// use 0, 1 or true false 
	bool flag = true;

	// prints a number by default
	cout << (2 > 3) << endl;

	// modify console output
	cout << std::boolalpha;
	// now false
	cout << (2 > 3) << endl;
	// return to numbers
	cout << std::noboolalpha;
	
	return EXIT_SUCCESS;
}
