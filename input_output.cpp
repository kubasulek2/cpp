/* Including Header Files */

// input output stream
#include <iostream>


/* Imports particular member from namespace */

// console input stream object
using std::cin;
// end of line object
using std::endl;

/* Alternative, do not do it! (naming conflicts) */
// using namespace std;


int main()
{
	/* Using it inside funtion changes the scope  */
	
	// console out stream object
	using std::cout;

	/* writing stream */
	
	// write to stream operator "<<", can be chained.1
	cout << "string literal" << endl;
	
	// using std without using namespace
	cout << 4 << std::endl;

	/* reading stream */
	
	// to capture user input, you must prepare not initialized variables
	int x; int y;

	cout << "please enter two numbers" << endl;
	// read from stream operator ">>", can be chained.1
	// process will hang waiting for input
	// all space separators tabs, spaces, enter will work beetween input variables
	cin >> x >> y;
	
	// display result
	cout << x + y << std::endl;

	/* printf also write to the console, but type must be specified */
	
	printf("%d %s\n", 4, "String");
	
	// Example of predefined constant
	return EXIT_SUCCESS;
}

