#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string>s1{"", "one", "Two", "Three","Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    vector<string>s2{"","Ten", "Twenty", "Thirty", "Fourty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    vector<string>s3{"", "Hundred", "Thousand", "Lakh", "Crore"};
    
    int n;
    cout << "Enter the number : ";
    cin >> n;
    
    if(n > 99)
    {
        cout << s1[n / 100] << " ";
        cout << s3[1] << " ";
        n %= 100;
    }
    if(n > 19 && n <= 99) 
    {
        cout << s2[n / 10] << " ";
        n %= 10;
    }
    
    if(n <= 19)
    {
        cout << s1[n] << " ";
    }
}