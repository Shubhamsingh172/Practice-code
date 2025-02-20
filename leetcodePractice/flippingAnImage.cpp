#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
            for(int i = 0; i < image.size(); i++)
            {
                reverse(image[i].begin(), image[i].end());
                for(int j = 0; j < image[i].size(); j++)
                {
                    image[i][j] = !image[i][j];
                }
            }
            return image;
        }
    };

    int main()
    {
        Solution s;
        vector<vector<int>>nums{{1,1,0},{1,0,1},{0,0,0}};
        vector<vector<int>>result = s.flipAndInvertImage(nums);
        for(int i = 0; i < result.size(); i++)
        {
            for(int j = 0; j < result.size(); j++)
            {
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
        return 0;
    }