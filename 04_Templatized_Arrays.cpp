#include <iostream>
#include <array>

using std::cin;
using std::cout;
using std::endl;

// Templatized arrays are copied not referenced when passed to function
// for pass by reference prepend "&" to parameter name 

// ass arrays are statically sized all not initialized indexes have value 0, seperate argument must be pass to track initialized values
void printArr(std::array<int, 10> &arr, int elements){
	
	for (size_t i = 0; i < elements; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	// Templatized arrays are statically sized, have methods attached
	std::array<int, 10> arr = {1,2,3};
	cout << arr[3] << endl;
	
	cout << arr[3] << endl;
	printArr(arr ,3);

	/* Learn more at https://www.geeksforgeeks.org/vector-in-cpp-stl/ */
	return 0;
}
