#include <iostream>
/* all numeric functions need it to work */
#include <cmath>

using std::cout;
using std::endl;


int main()
{
	pow(2,5);
	sqrt(4);
	
	double a = NAN;
	double b = INFINITY;
	double c = -INFINITY;

	cout << a << " " << b << " " << c << " " << endl;

	/* remainder vs modulo operator */
	//  10 % 3.25 would throw an error
	cout << remainder(10, 3.25) << " " <<  fmod(10,3.25) << endl;
	cout << fmax(1.12,2.34) << " " << fmin(2,4) << endl;
	cout << ceil(10.15) << " " << floor(1.12) << " " << trunc(-1.12) << endl;
	return EXIT_SUCCESS;
}
