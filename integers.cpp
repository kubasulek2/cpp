#include <iostream>
/* Only then strings will work */
#include <string>

using std::cout;
using std::endl;
using std::string;





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

	/* Strings */
	
	string str = "";
	
	/* Old C way of terminating strings */
	string C_style = "example\0";
		
	cout << str << endl;

	cout << "size of str " << sizeof(str) << endl;




	return EXIT_SUCCESS;
}
