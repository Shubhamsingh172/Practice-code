//using vector to perfom merge array program like in this program we have two different array to merge them in new array and sort 
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void Merge(vector<int>arr1, vector<int>arr2, vector<int>&merges)
{
    for(int i = 0; i < arr1.size(); i++)
        merges.push_back(arr1[i]);
    
    for(int i = 0; i < arr2.size(); i++)
        merges.push_back(arr2[i]);
    
    cout << "Merge Array Before Sort : ";
    for(int i = 0; i < merges.size(); i++)
    {
        cout << merges[i] << " ";
    }
    cout << endl;
    sort(merges.begin(),merges.end());
}
int main()
{
    vector<int>arr1 = {5,6,9,8,7};
    vector<int>arr2 = {2,1,4,3,10};
    vector<int>merges;
    Merge(arr1, arr2, merges);

    cout << "Merge Sorted Array is : ";
    for(int i = 0; i < merges.size(); i++)
    {
        cout << merges[i] << " ";
    }
    cout << endl;
    return 0;
}