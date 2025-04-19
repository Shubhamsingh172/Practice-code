#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the odd number of dimensions : ";
    cin >> n;
    static int magic[21][21];
    int k = 1;
    magic[0][n/2] = k++;
    int row = 0; 
    int column = n/2;
    while(k <= n * n)
    {
        int preRow = row;
        int preCol = column;
        
        column++;
        if(column == n)
            column = 0;
        
        row--;
        if(row == -1)
            row = n - 1;
        
        if(magic[row][column] != 0)
        {
            row = preRow + 1;
            column = preCol;
        }
        magic[row][column] = k++;
    }
    cout << "\nMagic Square is" << endl;
    for(int i = 0; i < n; i++)
    {
        cout.width(4);
        for(int j = 0; j < n; j++)
        {
            cout << magic[i][j] << " ";
        }
        cout << endl;
    }
}