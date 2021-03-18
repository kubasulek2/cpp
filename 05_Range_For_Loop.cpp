#include <iostream>
#include <array>

using std::cin;
using std::cout;
using std::endl;

/* Range based for loop, iterate over collection */

int main()
{
	// Templatized arrays are statically sized, have methods attached
	std::array<int, 10> arr = {1,2,3};
	
	/* auto &&i means initialize el and take the type of elements in the arr, int in this case */
	for (auto &&el : arr)
	{
		cout << el << '\t';
	}

	cout << endl;
	/* also */
	for (int el : arr)
	{
		cout << el << '\t';
	}
	
	

	/* Learn more at https://www.geeksforgeeks.org/vector-in-cpp-stl/ */
	return 0;
}
