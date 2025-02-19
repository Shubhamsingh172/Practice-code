// class Solution {
//     public:
//         string addSpaces(string s, vector<int>& spaces) {
//             string modified;
//             int j = 0;
//             for(int i = 0; i < s.length() + spaces.size(); i++)
//             {
//                 if(j < spaces.size() && i == spaces[j])
//                 {
//                     char ch = s[i];
//                     modified += 32;
//                     modified += ch;
//                     j++;
//                 }
//                 else if(i < s.length())
//                     modified += s[i];
//             }
//             return modified;
//         }
//     };