#include <iostream>
using namespace std;
int main()
{
	    cout<<"Original Array: 5, 4, 3, 2, 1 " <<endl;
	    cout <<"New Array: ";
    int n = 5;
    int arr[n] = {5, 4, 3, 2, 1};
    int temp;
    for(int i = 0; i<n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
        
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    
}
