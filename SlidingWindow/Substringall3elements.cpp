// class Solution {
//     public:
//         int numberOfSubstrings(string s) {
//             int i = 0;
//             int j = 0;
//             int result = 0;
//             vector<int>mp(3,0);
//             while(j < s.length())
//             {
//                 char ch = s[j];
//                 mp[ch - 'a']++;
//                 while(mp[0] > 0 && mp[1] > 0 && mp[2] > 0)
//                 {
//                     result += s.length() - j;
//                     mp[s[i] - 'a']--;
//                     i++;
//                 }
//                 j++;
//             }
//             return result;
//         }
//     };