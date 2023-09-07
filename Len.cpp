#include <iostream>
using namespace std;

int main() {
	cout<<"Original Array: 5, 4, 3, 2, 1 " <<endl;
  int arr[] = {5, 4, 3, 2, 1};
  int arrSize = sizeof(arr)/sizeof(arr[0]);
  cout << "The size of the array is: " << arrSize;
  return 0;
}
