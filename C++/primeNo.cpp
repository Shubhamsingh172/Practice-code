// class Solution {
//     public:
//         int countPrimes(int n) {
//             if(n < 2)
//                 return 0;
//             int prime = 0;
//             for(int i = 2; i < n; i++)
//             {
//                 int j = 2;
//                 while(j <= i / 2)
//                 {
//                     if(i % j == 0)
//                         break;
//                     j++;
//                 }
//                 if(j == i / 2 + 1)
//                     prime++;
//             }
//             return prime;
//         }
//     };