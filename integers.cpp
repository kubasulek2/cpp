#include <iostream>
#include <climits>

using std::cout;
using std::endl;





// In every program there must be function called main which will be automatically called when process runs
int main()
{
	/* Signed integers */

	// signed 2 bytes integer
	short x;

	// signed 2 or 4 bytes integer (depends on system)
	int y;
	
	// signed  4 bytes integer
	long z = 1234757573;
	
	// signed  8 bytes integer
	long long q = 1234757573;
	

	/* Unsigned integers */

	// unsigned 2 bytes integer
	unsigned short a;

	// unsigned 2 or 4 bytes integer (depends on system)
	unsigned int b;
	
	// unsigned  4 bytes integer
	unsigned long c = 1234757573;
	
	// unsigned  8 bytes integer
	unsigned long long d = 1234757573;
	
	// all integers if not initialized are autmatically initialized with zero value, booleans the same
	cout << y << endl;

	// sizeof function
	
	cout << "size of int " << sizeof(b) << endl;

	/* limitc constants */
	cout << SHRT_MIN << endl;
	cout << SHRT_MAX << endl;
	cout << USHRT_MAX << endl;
	cout << UINT64_MAX << endl;
	
	return EXIT_SUCCESS;
}
