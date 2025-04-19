#include <iostream>
using namespace std;

class Stack
{
    int top;
    char st[100];
    public:
    Stack()
    {
        top == -1;
    }
    bool isEmpty()
    {
        return top == 0;
    }
    void push(char ch)
    {
        st[++top] = ch;
    }
    char pop()
    {
        return st[top--];
    }
};
int main()
{
    Stack st;
    string input;
    cout << "Enter the stream of string : ";
    getline(cin, input);
    cout << input << endl;
    string result = "";
    int i = 0;
    while(input[i])
    {
        if(input[i] != ' ')
            st.push(input[i]);
        else 
        {
            while(!st.isEmpty())
            {
                result += st.pop();
            }
            result += " ";
        }
        i++;
    }
     while(!st.isEmpty())
    {
        result += st.pop();
    }
    cout << result << endl;
}