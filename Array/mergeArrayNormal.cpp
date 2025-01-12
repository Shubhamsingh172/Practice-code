//normal program using two arrays and merge them into new array to get the merge array

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4};
    int arr1[] = {5,6,7,8};
    int n = sizeof(arr)/sizeof(int) + sizeof(arr1)/sizeof(int);
    int merge[n];
    for(int i = 0; i < sizeof(arr)/sizeof(int); i++)
        merge[i] = arr[i];
    
    for(int i = 0; i < sizeof(arr1)/sizeof(int); i++)
        merge[sizeof(arr)/sizeof(int) + i] = arr1[i];
    
    cout << "\nMerge Array is" << endl;
    for(int i = 0; i < sizeof(merge)/sizeof(int); i++)
        cout << merge[i] << " ";
    cout << endl;
}