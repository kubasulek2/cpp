#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void printArr(int arr[], int size){
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	int arr[100];
	const int SIZE = 100;
	int count = 0;

	for (size_t i = 0; i < SIZE; i++)
	{
		// if user input not numeric value it breaks the loop
		if(cin >> arr[i]){ // this work because input stream only evaluates to true if it properly stored its value 
			count++;
		} else {
			// invalid character
			break;
		}
	}

	// reset state in case of error
	cin.clear();
	// ignore data in buffer in case of invalid input (otherwise next call to cin wouldn't ask user for input, but store buffered data in variable)
	cin.ignore(1000, '\n');
	
	printArr(arr, count);
	return 0;
}
