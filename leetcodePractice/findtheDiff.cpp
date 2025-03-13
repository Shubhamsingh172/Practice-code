// class Solution {
//     public:
//         char findTheDifference(string s, string t) {
//             map<char,int>mp;
//             for(auto &ch : s)
//                 mp[ch]++;
            
//             for(auto &ch : t)
//                 mp[ch]++;
//             char result;
//             for(auto var : mp)
//             {
//                 if(var.second % 2 == 1)
//                     result = var.first;
//             }
//             return result;
//         }
//     };