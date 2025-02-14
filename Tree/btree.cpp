#include <iostream>
using namespace std;

class Tnode // specific class for tree node 
{
    char data; // actual data to be inserted in the node of the tree
    Tnode *left; // left pointer of the tree
    Tnode *right; // right pointer of the tree
    Tnode(char d) // constructor which is defined privately 
    {
        data = d;
        left = right = nullptr;
    }
    friend class BinaryTree; // we are making BinaryTree class as our friend so it can access Tnode class private properties.
};

class Qnode // specific qnode class for storing the node of tree on that many push and pop operation will be performed 
{
    Tnode *data; // data is in the form of Tnode pointer which is expected
    Qnode *next; // now for connecting the tree Qnode will go for its next address to connect the tree;
    Qnode(Tnode *d) // constructor defined privately
    {
        data = d;
        next = nullptr;
    }
    friend class Queue;
};

class Queue 
{
    Qnode *front, *rear; // 
    Queue()
    {
        front = rear = nullptr;
    }
    void push(Tnode *e) // here we are pushing the address of node into the queue which is in the form of data
    {
        Qnode *p = new Qnode(e);
        if (rear == nullptr) // if the root is null then our first passed value become as our root.
        {
            front = rear = p; // for the first value only
            return;
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
        if (!isEmpty())
        {
            Tnode *temp = front->data; // first we are storing the value which will be pop
            front = front->next; // then moving the front pointer to its next location 
            if (front == nullptr) // then checking if the front become null then assign rear = nullptr
                rear = nullptr;
            return temp; // then returning the temp
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
        while (input[i]) // here one by one the character will check and went for insertion into the tree node 
        {
            Tnode *p = new Tnode(input[i]); // stroing each character into the tree node 
            if (root == nullptr) //checking whether the tree's root is null or not if  it is null then the character will assign to root
            {
                root = p;
            }
            else //else it will jump to its next condition 
            {
                Queue que; // we need one for storing the root and its data to add perfectly into the binary tree
                que.push(root); // step 1
                while (1)
                {
                    Tnode *popped = que.pop(); // step 2
                    if (popped->left == nullptr) //step 3
                    {
                        popped->left = p;
                        break;
                    }
                    else if (popped->right == nullptr) // step 3
                    {
                        popped->right = p;
                        break;
                    }
                    else // step 4
                    {
                        que.push(popped->left);
                        que.push(popped->right);
                    }
                }
            }
            i++;
        }
    }
    void bfs() // display function
    {
        Queue que;
        que.push(root); // step 1
        cout << "\nBFS :";
        while (!que.isEmpty())
        {
            Tnode *popped = que.pop(); // step 2
            cout << popped->data << " "; // step 3
            if (popped->left) // step 4
                que.push(popped->left);
            if (popped->right) // step 4
                que.push(popped->right);
        }
    }
};
int main()
{
    string input;
    cout << "\nEnter a Stream of Characters : ";
    getline(cin, input);
    BinaryTree bt;
    bt.createTree(input);
    bt.bfs();
    cout << endl;
    return 0;
}