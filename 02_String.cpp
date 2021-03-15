#include <iostream>
/* String class there */
#include <string>


using std::cout;
using std::endl;
using std::string;

int main()
{
	/* Strings class */
	
	/* strings are initialize as empty strings */
	string str;
	// or
	std::string a = "abc";
	// concatenation;
	a += "d";

	cout << str << endl;
	cout << a[0] + a[1] + a[2] << " " << a[a.length() -1] << endl;

	cout << "size of str " << sizeof(str) << endl;


	/* C style string */

	char name[] = "Kuba";
	//  just an array
	//  actually  "Kuba\0", also length is 5
	//  cannot change the length
	cout << name;
	return EXIT_SUCCESS;
}
