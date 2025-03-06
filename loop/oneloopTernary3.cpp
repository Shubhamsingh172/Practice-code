#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    for(int i = 1, spaces = 1; i <= n; (i <= n / 2 + 1) ? 
    ((spaces <= ( n / 2 + 1) * 2 - (i * 2 - 1)) ? (cout << " ", spaces++) : 
    (cout << "* ", spaces++)), ((spaces > (n / 2 + 1) * 2) ? 
    (cout << endl, spaces = 1, i++): 0) : ((spaces <= i * 2 - n) ? 
    (cout << " ", spaces++) : (cout << "* ", spaces++)), 
    ((spaces > (n / 2 + 1) * 2) ? (cout << endl, spaces = 1, i++): 0));
}