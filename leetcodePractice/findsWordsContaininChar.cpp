#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> findWordsContaining(vector<string>& words, char x) {
            vector<int>result; // again write the code for practice 
            for(int i = 0; i < words.size(); i++)
            {
                for(int j = 0; j < words[i].size(); j++)
                {
                    if(words[i][j] == x)
                    {
                        result.push_back(i);
                        break;
                    }
                }
            }
            return result;
        }
    };

    int main()
    {
        Solution s;
        char ch;
        cout << "Enter the word to be searched : ";
        cin >> ch;
        vector<string>arr{"abcdefgh", "abbfegcik", "xyzwfjkfjdskl"};
        vector<int>result = s.findWordsContaining(arr, ch);
        for(auto &it : result)
        {
            cout << it << endl;
        }
        return 0;
    }