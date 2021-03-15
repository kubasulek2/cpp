#include <iostream>


using std::cout;
using std::endl;






int main()
{
	
	// char uses single quote
	char x = 'A';
	// char is actually integer, range -128 to 127 
	char y = 65;
	
	// char is actually integer, range 0 to 255 
	unsigned char z = 131;


	cout << x << " = " << y << endl;
	// cast char as int
	cout << (int) z << endl;
	cout << "z " << z << endl;

	// 1 byte
	cout << "size of char " << sizeof(x) << endl;

	
	return EXIT_SUCCESS;
}
