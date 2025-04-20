// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Node 
{
    public:
    char data;
    Node *left;
    Node *right;
    Node(char d)
    {
        data = d;
        left = right = NULL;
    }
};
class QueueNode
{
    public:
    Node *data;
    QueueNode *next;
    QueueNode(Node *d)
    {
        data = d;
        next = nullptr;
    }
};
class Queue
{
    public:
    QueueNode *front;
    QueueNode *rear;
    Queue()
    {
        front = rear = nullptr;
    }
    void push(Node *d)
    {
        QueueNode *newNode = new QueueNode(d);
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
        return nullptr;
    }
};
class BinaryTree
{
    public:
    Node *root;
    BinaryTree()
    {
        root = nullptr;
    }
    void createTree(string input)
    {
        int i = 0;
        while(input[i])
        {
            Node *newNode = new Node(input[i]);
            if(root == nullptr)
                root = newNode;
            else 
            {
                Queue que;
                que.push(root);
                while(1)
                {
                    Node *temp = que.pop();
                    if(temp->left == nullptr)
                    {
                        temp->left = newNode;
                        break;
                    }
                    else if(temp->right == nullptr)
                    {
                        temp->right = newNode;
                        break;
                    }
                    else
                    {
                        que.push(temp->left);
                        que.push(temp->right);
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
        cout << "BFS traversal" << endl;
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

int main()
{
    BinaryTree bt;
    string input;
    cout << "Enter the stream of String : ";
    getline(cin, input);
    bt.createTree(input);
    bt.bfs();
    cout << endl;
    return 0;
}