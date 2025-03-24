// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Write C++ code here
    // char pass = 'A';
    // cout << pass << endl;
    // cout << char(pass + 3) << endl;
    // cout << pass << endl;
    
    string s;
    cout << "Enter your password : ";
    cin >> s;
    cout << "password : " << s << endl;
    for(int i = 0; i < s.length(); i++)
        s[i] = char(s[i] + 3);
    cout << "encrypted password : " << s << endl;
    
    string decrypted = s;
    // cout << "Enter the shift value to decrypt the password : ";
    // int shift;
    // cin >> shift;
    // for(int i = 0; i < decrypted.length(); i++)
    //     decrypted[i] = char(decrypted[i] - shift);
    // cout << "Decrypted password is : ";
    // cout << decrypted << endl;
    
    
    //also 
    cout << "\n\n\nALSO if the shift is not provided then it will be search for each shift which means it will search the all the string with each shift until the meaningful string is not found.\n";
    
    
    for(int i = 1; i <= 26; i++)
    {
        for(int j = 0; j < decrypted.length(); j++)
        {
            if(i <= 26)
                decrypted[j] = char(decrypted[j] - i);
            else 
                decrypted[j] = char(decrypted[j] - i % 26);
        }
        cout << "Shift " << i << " : " << decrypted << endl;
        decrypted = s;
    }
    
    return 0;
}