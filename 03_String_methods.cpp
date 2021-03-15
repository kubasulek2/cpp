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
	string str = "Kuba";
	string str2 = "abcdef";
	
	cout << str.length() << endl;
	// same as above
	cout << str.size() << endl;


	/* Mutating methods */

	// the same as += operator
	cout << str.append(" lubi") << endl;

	cout << str.insert(2,"test") << endl;
	
	// skipping second argument erase to the end of string 
	cout << str.erase(2,4) << endl;

	// remove last letter 
	str.pop_back();
	cout << str << endl;
	
	// remove last letter 
	
	cout << str.replace(0,4, "Jakub") << endl;


	/* Not Mutating Methods */

	// find returns index
	string toCensor = "What the fuck";
	cout << toCensor.replace(toCensor.find("fuck"), 4, "heck") << endl;
	
	cout << toCensor.substr(0,4) << endl;
	// find  position first of any character in given string
	cout << toCensor.find_first_of("wta") << endl;

	/* To properly handle not fouand index, must cast it as signed integer, otherwise it returns unsigned, what means max value overflowed by one */
	cout << (int) toCensor.find("!") << endl;
	
	/* However comparison operator works */
	cout << (toCensor.find("!") == -1 ? "not found" : "found") << endl;

	/* For comparing test zero for positive */
	cout << (toCensor.compare("another string") == 0 ? "the same" : "not the same") << endl;
	return EXIT_SUCCESS;
}
