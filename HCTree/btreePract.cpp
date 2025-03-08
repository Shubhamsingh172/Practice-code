#include <iostream>
using namespace std;

class Tnode
{
    Tnode *left;
    Tnode *right;
    char data;
    Tnode(char d)
    {
        left = right = nullptr;
        data = d;
    }
    friend class BinaryTree;
};

class Qnode
{
    Tnode *data;
    Qnode *next;
    Qnode(Tnode *d)
    {
        data = d;
        next = nullptr;
    }
    friend class Queue;
};

class Queue
{
    Qnode *front, *rear;
    Queue()
    {
        front = rear = nullptr;
    }
    void push(Tnode *e)
    {
        Qnode *p = new Qnode(e);
        if(rear == nullptr)
        {
            front = rear = p;
        }
        rear->next = p;
        rear = p;
    }
    bool isEmpty()
    {
        return front == nullptr;
    }
    Tnode *pop()
    {
        if(!isEmpty())
        {
            Tnode *popped = front->data;
            front = front->next;
            if(front == nullptr)
                rear = nullptr;
            return popped;
        }
        return nullptr;
    }
    friend class BinaryTree;
};

class BinaryTree
{
    Tnode *root;
    public:
    BinaryTree()
    {
        root = nullptr;
    }
    void createTree(string input)
    {
        int i = 0;
        while(input[i])
        {
            Tnode *p = new Tnode(input[i]);
            if(root == nullptr)
                root = p;
            else
            {
                Queue que;
                que.push(root);
                while(1)
                {
                    Tnode *popped = que.pop();
                    if(popped->left == nullptr)
                    {
                        popped->left = p;
                        break;
                    }
                    else if(popped->right == nullptr)
                    {
                        popped->right = p;
                        break;
                    }
                    else 
                    {
                        que.push(popped->left);
                        que.push(popped->right);
                    }
                }
            }
            i++;
        }
    }
    Tnode *getRoot()
    {
        return root;
    }
    void preOrder(Tnode *root) // this root is local variable of this function as it receive the value from someone
    {
        if(root != nullptr)
        {
            cout << root->data << " ";
            preOrder(root->left);
            preOrder(root->right);
        }
    }
    void postOrder(Tnode *root) // this root is local variable of this function as it receive the value from someone
    {
        if(root != nullptr)
        {
            postOrder(root->left);
            postOrder(root->right);
            cout << root->data << " ";
        }
    }
    void inOrder(Tnode *root) // this root is local variable of this function as it receive the value from someone
    {
        if(root != nullptr)
        {
            inOrder(root->left);
            cout << root->data << " ";
            inOrder(root->right);
        }
    }
};

int main()
{
    string input;
    cout << "Enter the stream of characters : ";
    getline(cin, input);
    BinaryTree bt;
    bt.createTree(input);
    cout << "\nPreOrder Traversal : ";
    bt.preOrder(bt.getRoot());
    cout << "\nInOrder Traversal : ";
    bt.inOrder(bt.getRoot());
    cout << "\nPostOrder Traversal : ";
    bt.postOrder(bt.getRoot());
}