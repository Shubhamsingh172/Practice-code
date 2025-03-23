// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter the number of rows for the matrix : ";
    cin >> rows;
    int **arr = new int*[rows];
    int colSize[rows];
    
    for(int i = 0; i < rows; i++)
    {
        cout << "Enter the column for 1st matrix : ";
        //creating the columns which will take the input for column for each row of variable size in arr
        int columns;
        cout << "\nEnter the columns for row  " <<  i + 1 << " : ";
        cin >> colSize[i];
        arr[i] = new int[colSize[i]];
    }
    
    for(int i = 0; i < rows; i++)
    {
        cout << "Enter the " << colSize[i] << " elements for row " << i + 1 << " : ";
        for(int j = 0; j < colSize[i]; j++)
            cin >> arr[i][j];
    }

    printf("\nYour Variable Length Array is\n");
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < colSize[i]; j++)
        {
            cout.width(4);
            cout << arr[i][j];
        }
        cout << endl;
    }
    return 0;
}