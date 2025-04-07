// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Node
{
    char data;
    Node *left, *right;
    public:
    Node(char d)
    {
        data = d;
        left = right = nullptr;
    }
    friend class BinaryTree;
};
class Qnode
{
    public:
    Node *data;
    Qnode *next;
    Qnode(Node *p)
    {
        data = p;
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
        front = rear = nullptr;
    }
    void push(Node *e)
    {
        Qnode *newNode = new Qnode(e);
        if(rear == nullptr)
        {
            front = rear = newNode;
            return;
        }
        rear->next = newNode;
        rear = newNode;
    }
    bool isEmpty()
    {
        return front == nullptr;
    }
    Node *pop()
    {
        if(!isEmpty())
        {
            Node *temp = front->data;
            front = front->next;
            if(front == nullptr)
                rear = nullptr;
            return temp;
        }
        return NULL;
    }
    friend class BinaryTree;
};
class BinaryTree
{
    Node *root;
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
            Node *p = new Node(input[i]);
            if(root == nullptr)
                root = p;
            else
            {
                Queue que;
                que.push(root); // step 1
                while(1)
                {
                    Node *popped = que.pop();
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
    void bfs()
    {
        Queue que;
        que.push(root);
        cout << "BFS Traversal : ";
        while(!que.isEmpty())
        {
            Node *popped = que.pop();
            cout << popped->data << " ";
            if(popped->left)
                que.push(popped->left);
            if(popped->right)
                que.push(popped->right);
        }
    }
};
int main() {
    // Write C++ code here
    string input;
    cout << "Enter the stream of characters : ";
    getline(cin, input);
    BinaryTree bt;
    bt.createTree(input);
    bt.bfs();
    cout << endl;
    return 0;
}