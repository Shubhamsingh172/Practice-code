// class Solution {
//     public:
//         vector<int> decode(vector<int>& encoded, int first) {
//             vector<int>result;
//             result.push_back(first);
//             int xored = encoded[0] ^ first;
//             result.push_back(xored);
//             for(int i = 1; i < encoded.size(); i++)
//             {
//                 xored = encoded[i] ^ xored;
//                 result.push_back(xored);
//             }
//             return result;
//         }
//     };