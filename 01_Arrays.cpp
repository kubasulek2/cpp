#include <iostream>
#include <climits>


using std::cout;
using std::cin;
using std::endl;



int main()
{
	/* C style arrays */

	// standard array of length 20, all not set value are initialized at 0
	int arr[20] = {1,2,3};
	
	// store how many elements are set 
	int arrElems = 3;
	
	// size of array, sizeof in bytes, divided by integer size
	int arrSize = sizeof(arr) / sizeof(int);

	/* this will print also unset array elements */
	for (size_t i = 0; i < arrSize; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
	
	/* this will print only initialized elements */
	for (size_t i = 0; i < arrElems; i++)
	{
		cout << arr[i] << " ";
	}

	

	// cin >> arr[arrElems];
	// arrElems++;
	
	cout << arr[arrElems] << endl;
	

	return EXIT_SUCCESS;
}
