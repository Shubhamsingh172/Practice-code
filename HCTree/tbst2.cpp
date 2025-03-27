#include <iostream>
using namespace std;

class Node 
{
    int data;
    Node *left;
    Node *right;
    bool isThread;
    public:
    Node(int d)
    {
        data = d;
        left = right = nullptr;
        isThread = 0;
    }
    friend class TBST;
};

class TBST
{
    Node *root;
    Node *dummy;
    public:
    TBST()
    {
        root = nullptr;
        dummy = new Node(9999);
    }
    void insert(int d)
    {
        Node *newNode = new Node(d);
        insert(root, newNode);
    }
    void insert(Node *&root, Node * newNode)
    {
        if(root == nullptr)
        {
            root = newNode;
            root->left = dummy;
            root->isThread = 1;
        }
        else 
        {
            if(newNode->data < root->data)
            {
                if(root->isThread == 1)
                {
                    newNode->left = root->left;
                    newNode->isThread = 1;
                    root->left = newNode;
                    root->isThread = 0;
                }
                else 
                    insert(root->left, newNode);
            }
            else 
            {
                if(root->right == nullptr)
                {
                    root->right = newNode;
                    newNode->left = root;
                    newNode->isThread = 1;
                }
                else 
                    insert(root->right, newNode);
            }
        }
    }
    Node *findRightMostNode(Node *current)
    {
        while(current->right)
            current = current->right;
        return current;
    }
    void inOrder()
    {
        Node *current = findRightMostNode(root);
        while(current != dummy)
        {
            cout << current->data << " ";
            if(current->isThread == 1)
                current = current->left;
            else 
                current = findRightMostNode(current->left); // it means there is child is present 
        }
    }

};
int main()
{
    TBST tbst;
    tbst.insert(6);
    tbst.insert(3);
    tbst.insert(8);
    tbst.insert(1);
    tbst.insert(5);
    tbst.insert(7);
    tbst.insert(11);
    tbst.insert(9);
    tbst.insert(13);
    tbst.inOrder();
    return 0;
}