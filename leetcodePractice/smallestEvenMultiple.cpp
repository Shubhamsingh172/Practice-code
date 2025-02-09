#include <iostream>
using namespace std;

class Solution {
public:
    int smallestEvenMultiple(int n) {
        return n % 2 == 0 ? n : n * 2;
    }
};

int main()
{
    int number;
    cout << "Enter number : ";
    cin >> number;
    Solution s;
    cout << "\nSmallest Even Multiple of the " << number << " is : " << s.smallestEvenMultiple(number) << endl;
    return 0;
}