// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    string input;
    cout << "Enter the input string : ";
    getline(cin, input);
    for(int i = 0; i < input.size(); i++)
    {
        if(input[i] == ' ') 
            cout << ' ';
        else if(input[i] >= 97 && input[i] < 122)
            cout << char(input[i] - 32);
        else 
            cout << char(input[i] + 32);
    }
    return 0;
}