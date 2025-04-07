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

class Node
{
    public:
    Tnode *data;
    Node *next;
    Node(Tnode *d)
    {
        data = d;
        next = nullptr;
    }
};
class Queue
{
    public:
    Node *rear, *front;
    Queue()
    {
        rear = front = nullptr;
    }
    void push(Tnode *p)
    {
        Node *newNode = new Node(p);
        if(front == nullptr)
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
};
class Stack
{
    public:
    Node *top;
    Stack()
    {
        top = nullptr;
    }
    void push(Tnode *p)
    {
        Node *newNode = new Node(p);
        if(top == nullptr)
        {
            top = newNode;
            return;
        }
        newNode->next = top;
        top = newNode;
    }
    bool isEmpty()
    {
        return top == nullptr;
    }
    Tnode *pop()
    {
        if(!isEmpty())
        {
            Tnode *temp = top->data;
            top = top->next;
            return temp;
        }
        return nullptr;
    }
    Tnode *peek()
    {
        return top ? top->data : nullptr;
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
        que.push(root); // step 1
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
    
    void inOrder(Tnode *root)
    {
        if(root != nullptr)
        {
            inOrder(root->left);
            cout << root->data << " ";
            inOrder(root->right);
        }
    }
    void inOrderNonRecursive()
    {
        Stack stack;
        Tnode *temp = root;
        while(temp != nullptr || !stack.isEmpty())
        {
            while(temp != nullptr)
            {
                stack.push(temp);
                temp = temp->left;
            }
            temp = stack.pop();
            cout << temp->data << " ";
            temp = temp->right;
        }
    }

    void preOrder(Tnode *root)
    {
        if(root != nullptr)
        {
            cout << root->data << " ";
            preOrder(root->left);
            preOrder(root->right);
        }
    }
    void preOrderNonRecursive()
    {
        Stack stack;
        Tnode *temp = root;
        while(temp != nullptr || !stack.isEmpty())
        {
            while(temp != nullptr)
            {
                cout << temp->data << " ";
                stack.push(temp);
                temp = temp->left;
            }
            temp = stack.pop();
            temp = temp->right;
        }
    }
    void postOrder(Tnode *root)
    {
        if(root != nullptr)
        {
            postOrder(root->left);
            postOrder(root->right);
            cout << root->data << " ";
        }
    }
    void postOrderNonRecursive()
    {
        Stack stack;
        Tnode *temp = root;
        while(temp != nullptr || !stack.isEmpty())
        {
            while(temp != nullptr)
            {
                if(temp->right)
                    stack.push(temp->right);
                stack.push(temp);
                temp = temp->left;
            }
            temp = stack.pop();
            if(temp->right && stack.peek() == temp->right)
            {
                Tnode *swap = stack.pop();
                stack.push(temp);
                temp = swap;
            }
            else 
            {
                cout << temp->data << " ";
                temp = nullptr;
            }
        }
    }
    Tnode *getRoot()
    {
        return root;
    }
};
int main()
{
    string input;
    cout << "Enter the stream of string : ";
    getline(cin, input);
    
    BinaryTree bt;
    bt.createTree(input);
    bt.bfs();
    
    cout << "\nInorder Traversal of the Tree : ";
    bt.inOrder(bt.getRoot());
    cout << "\nInorder NonRecursive Traversal of the Tree : ";
    bt.inOrderNonRecursive();
    
    cout << "\nPreOrder Traversal of the Tree : ";
    bt.preOrder(bt.getRoot());
    cout << "\nPreOrder NonRecursvie Traversal of the Tree : ";
    bt.preOrderNonRecursive();
    
    cout << "\nPostOrder NonRecursiveTraversal of the Tree : ";
    bt.postOrder(bt.getRoot());
    cout << "\nPostOrder NonRecursiveTraversal of the Tree : ";
    bt.postOrderNonRecursive();
    return 0;
}