#include <iostream>
using namespace std;

class Stack
{
    int *arr;
    int size;
    int top;
    public:
        Stack(int size)
        {
            this->size = size;
            arr = new int[size];
            top = -1;
        }
        bool isFull()
        {
            return top == size - 1;
        }
        bool isEmpty()
        {
            return top == -1;
        }
        void push(int data)
        {
            if(!isFull())
                arr[++top] = data;
            else 
                cout << "Stack Overflow...." << endl;
            
            cout << endl;
        }
        int pop()
        {
            if(!isEmpty())
                return arr[top--];
            else 
                cout << "Stack Underflow...." << endl;
            
            cout << endl;
        }
        void display()
        {
            cout << "Stack elements are" << endl;
            for(int i = 0; i < top; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
};
int main()
{
    Stack st(5);
    while(true)
    {
        int choice;
        cout << "\n1.Insert the element.\n";
        cout << "2.Delete the element." << endl;
        cout << "3.Display the element." << endl;
        cout << "4.Exit the Program." << endl;
        cout << "\nEnter your choice : ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                int element;
                cout << "Enter the element to pe pushed : ";
                cin >> element;
                st.push(element);
                break;
            case 2:
                cout << st.pop() << " popped successfully.\n";
                break;
            case 3:
                st.display();
                break;
            case 4:
                cout << "Thank you for using this program...\n";
                exit(0);
            default:
                cout << "Invalid input please Try Again......" << endl;
        }
    }
    return 0;
}