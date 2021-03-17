#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;

// vectors are copied not referenced when passed to function
// for pass by reference prepend "&" to parameter name 
void printArr(std::vector<int> vect){
	
	for (size_t i = 0; i < vect.size(); i++)
	{
		cout << vect[i] << " ";
	}
	cout << endl;
}

int main()
{
	// Vectors are dynamically sized, have methods attached
	std::vector<int> arr = {1,2,3};
	arr.push_back(4);
	cout << arr[3] << endl;
	
	arr.pop_back();
	cout << arr[3] << endl;
	
	/* Learn more at https://www.geeksforgeeks.org/vector-in-cpp-stl/ */
	return 0;
}
