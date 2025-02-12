#include <iostream>
using namespace std;

class  Solution {
public:
    int xorOperation(int n, int start) {
        int sum = 0;
        for(int i = 0; i < n; i++)
        {
            sum ^= start + 2 * i;
        }
        return sum; // self solve 
    }
};

int main()
{
    Solution s;
    int n, start;
    cout << "Enter the range and the start : ";
    cin >> n >> start;
    cout << "Bitwise XOR of all the elements in an array is : " << s.xorOperation(n, start) << endl;
    return 0;
}