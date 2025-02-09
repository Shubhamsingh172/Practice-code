#include <iostream>
using namespace std;

class Solution {
public:
    bool isThree(int n) {
        int count = 0;
        for(int i = 1; i <= n; i++)
        {
            if(n % i == 0)
                count++;
        }
        return count == 3 ? true : false;
    }
};

int main()
{
    Solution s;
    int number;
    cout << "Enter a number : ";
    cin >> number;

    if(s.isThree(number))
        cout << number << " has exactly three divisors which is true" << endl;
    else 
        cout << number << " has not three divisors exactly." << endl;

    return 0;
}