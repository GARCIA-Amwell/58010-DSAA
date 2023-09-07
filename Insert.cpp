#include <iostream>
using namespace std;

int main() 
{
	  cout << "Original Array: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 \n";
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
    int newItem = 1000; 

    if (sizeof(arr) / sizeof(arr[0]) >= 2) {
        for (int i = sizeof(arr) / sizeof(arr[0]); i > 2; i--) arr[i] = arr[i - 2];
        arr[2] = newItem;
    }

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) std::cout << arr[i] << " ";
    return 0;
}

