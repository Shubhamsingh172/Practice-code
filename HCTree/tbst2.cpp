#include <iostream>
using namespace std;

class Node
{
public: // Make constructor accessible
    int data;
    Node *left;
    Node *right;
    bool isThread;

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
        dummy->right = dummy;
        dummy->isThread = 1;
    }

    void insert(int d)
    {
        Node *newNode = new Node(d);
        insert(root, newNode);
    }

    void insert(Node *&root, Node *newNode) // Pass root as reference
    {
        if (root == nullptr)
        {
            root = newNode;
            root->right = dummy;
            root->isThread = 1;
        }
        else
        {
            if (newNode->data < root->data) // Corrected condition
            {
                if (root->left == nullptr)
                {
                    root->left = newNode;
                    newNode->right = root;
                    newNode->isThread = 1;
                }
                else
                    insert(root->left, newNode);
            }
            else
            {
                if (root->isThread)
                {
                    newNode->right = root->right;
                    newNode->isThread = 1;
                    root->right = newNode;
                    root->isThread = 0;
                }
                else
                    insert(root->right, newNode);
            }
        }
    }
    
    Node *findLeftMostNode(Node *current)
    {
        if (!current) return nullptr; // Prevent null access
        while (current->left)
            current = current->left;
        return current;
    }

    Node *findRightMostNode(Node *current)
    {
        if (!current) return nullptr;
        while (current->right && !current->isThread)
            current = current->right;
        return current;
    }

    void inOrder()
    {
        Node *current = findLeftMostNode(root);
        if (!current) return; // Prevent null access
        while (current != dummy) // Corrected condition
        {
            cout << current->data << " ";
            if (current->isThread)
                current = current->right;
            else
                current = findLeftMostNode(current->right);
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
