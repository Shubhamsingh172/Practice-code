#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximumWealth(vector<vector<int>> &accounts)
    {
        int max = 0;
        for (int i = 0; i < accounts.size(); i++)
        {
            int sum = 0;
            for (int j = 0; j < accounts[0].size(); j++)
            {
                sum += accounts[i][j];
            }
            if (sum > max)
                max = sum;
        }
        return max;
    }
};

int main()
{
    vector<vector<int>>accounts{{1,2,3}, {3,2,1}};
    Solution s;
    cout << "Richest Customer Wealth : " << s.maximumWealth(accounts) << endl;
    return 0;
}