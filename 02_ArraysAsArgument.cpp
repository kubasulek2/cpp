#include <iostream>
#include <climits>


using std::cout;
using std::cin;
using std::endl;

void print_arr(int[]);


int main()
{

	int arr[20] = {1,2,3};
	
	cout << sizeof(arr) << endl;
	print_arr(arr);
	return EXIT_SUCCESS;
}

/* Actually it passes pointer, you can pass size as argument */
void print_arr(int arr[]){
	
	// display pointer size not array size
	cout << sizeof(arr);
}
