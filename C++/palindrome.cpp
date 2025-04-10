#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string str = "naman";
    string rev = str;
    reverse(rev.begin(), rev.end()); // REVERSE 
    if(rev == str)
        cout << "Palindrome" << endl;
    else 
        cout << "Not a palindrome." << endl;
}