#include <iostream>
#include <string>


using std::cin;
using std::endl;


int main()
{
	/* For working with input string, special function must be used. Otherwise each space is treated as end of input. 
	*  Next words are stored into temp buffer
	*/

	// for working with strings
	std::string info;
	getline(cin,info);
	
	// // for working with multiple numbers also
	// cin.getline()

	return EXIT_SUCCESS;
}

