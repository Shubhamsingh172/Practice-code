#include <iostream>
using namespace std;

class Tnode 
{
    public:
    char data;
    Tnode *left;
    Tnode *right;
    Tnode(char d)
    {
        data = d;
        left = right = nullptr;
    }
};

class Qnode
{
    public:
    Tnode *data;
    Qnode *next;
    Qnode(Tnode *d)
    {
        data = d;
        next = nullptr;
    }
};

class Queue
{
    public:
    Qnode *front;
    Qnode *rear;
    Queue()
    {
        rear = front = nullptr;
    }
    void push(Tnode *p)
    {
        Qnode *newNode = new Qnode(p);
        if(rear == nullptr)
        {
            rear = front = newNode;
            return;
        }
        rear->next = newNode;
        rear = newNode;
    }
    bool isEmpty()
    {
        return front == nullptr;
    }
    Tnode *pop()
    {
        Queue que;
        if(!isEmpty())
        {
            Tnode * temp = front->data;
            front = front->next;
            if(front == nullptr)
                rear = nullptr;
            return temp;
        }
        return nullptr;
    }
};
class BinaryTree
{
    public:
    Tnode *root;
    BinaryTree()
    {
        root = nullptr;
    }
    void createTree(string input)
    {
        int i = 0;
        while(input[i])
        {
            Tnode *newNode = new Tnode(input[i]);
            if(root == nullptr)
                root = newNode;
            else 
            {
                Queue que;
                que.push(root);
                while(1)
                {
                    Tnode *popped = que.pop();
                    if(popped->left == nullptr)
                    {
                        popped->left = newNode;
                        break;
                    }
                    else if(popped->right == nullptr)
                    {
                        popped->right = newNode;
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
    void bfs()
    {
        Queue que;
        que.push(root);
        cout << "BFS : ";
        while(!que.isEmpty())
        {
            Tnode *popped = que.pop();
            cout << popped->data << " ";
            if(popped->left)
                que.push(popped->left);
            if(popped->right)
                que.push(popped->right);
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
    bt.bfs();
    cout << endl;
    return 0;
}