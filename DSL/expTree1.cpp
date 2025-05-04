#include <iostream>
using namespace std;

class Node 
{
    char data;
    Node *left;
    Node *right;
    Node(char d):data(d), left(nullptr), right(nullptr){}
    friend class ExpressionTree;
};

class stack
{
    Node* st[100];
    int top;
    public:
    stack():top(-1){}
    bool isEmpty()
    {
        return top == -1;
    }
    void push(Node *node)
    {
       st[++top] = node;
    }
    Node *pop()
    {
        return st[top--];
    }
    Node *getTop()
    {
        return st[top];
    }
};

class ExpressionTree
{
    Node *root;
    public:
    void createTree(string prefix)
    {
        int j = prefix.length() - 1;
        stack st;
        while(j >= 0)
        {
            if((prefix[j] >= 65 && prefix[j] <= 90) || prefix[j] >= 97 && prefix[j] <= 122)
            {
                st.push(new Node(prefix[j]));
            }
            else 
            {
                Node* newNode = new Node(prefix[j]);
                newNode->left = st.pop();
                newNode->right = st.pop();
                st.push(newNode);
            }
            j--;
        }
        root = st.pop();
    }
    Node *getRoot()
    {
        return root;
    }
    void postOrder(Node *root)
    {
        if(root)
        {
            postOrder(root->left);
            postOrder(root->right);
            cout << root->data << " ";
        }
    }
    void postOrderNonRecursive()
    {
        stack st;
        Node *temp = this->root;
        while(temp != nullptr || !st.isEmpty())
        {
            while(temp)
            {
                if(temp->right)
                    st.push(temp->right);
                st.push(temp);
                temp = temp->left;
            }
            temp = st.pop();
            if(temp->right && st.getTop() == temp->right)
            {
                Node *temp1 = st.pop();
                st.push(temp);
                temp = temp1;
            }
            else 
            {
                cout << temp->data << " ";
                temp = nullptr;
            }
        }
    }
};
int main() {
    string prefix;
    cout << "Enter a prefix Expression : ";
    getline(cin ,prefix);
    ExpressionTree expTree;
    expTree.createTree(prefix);
    cout << "PostOrder Non Recursive" << endl;
    expTree.postOrderNonRecursive();
    cout << "\nPostOrder Recursive" << endl;
    expTree.postOrder(expTree.getRoot());
    return 0;
}