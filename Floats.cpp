#include <iostream>
#include <float.h>

using std::cout;
using std::endl;


int main()
{
	/* 4 bytes */
	float x = 3.41;
	
	/* Scientific notation */
	x = 3.41E4;

	/* 8 bytes */
	double y = 0.165E12;
	
	/* 16 bytes */
	long double z = 0.165E12;

	/* modifier for not using scientific notations */
	cout << std::fixed << y << endl;

	cout << sizeof(x) << " " << sizeof(y) << " " << sizeof(z) << endl;
	
	cout << FLT_DIG << endl;
	cout << DBL_DIG << endl;
	cout << LDBL_DIG << endl;
	
	return EXIT_SUCCESS;
}
