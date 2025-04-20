#include <iostream>
using namespace std;

class Node 
{
    public:
    int data;
    Node *left;
    Node *right;
    Node(char d)
    {
        data = d;
        left = right = nullptr;
    }
    friend class BST;
};
class BST
{
    Node *root;
    public:
    BST()
    {
        root = nullptr;
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
        }
        else 
        {
            if(newNode->data < root->data)
            {
                if(root->left == nullptr)
                    root->left = newNode;
                else 
                    insert(root->left, newNode);
            }
            else 
            {
                if(root->right == nullptr)
                    root->right = newNode;
                else 
                    insert(root->right, newNode);
            }
        }
    }
    Node *getRoot()
    {
        return root;
    }
    void preOrder(Node *root)
    {
        if(root)
        {
            cout << root->data << " ";
            preOrder(root->left);
            preOrder(root->right);
        }
    }
    void inOrder(Node *root)
    {
        if(root)
        {
            inOrder(root->left);
            cout << root->data << " ";
            inOrder(root->right);
        }
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
    void mirror(Node *root)
    {
        if(root == nullptr)
            return;
        
        mirror(root->left);
        mirror(root->right);
        
        Node *temp = root->left;
        root->left = root->right;
        root->right = temp;
    }
    int minimum()
    {
        Node *root = this->root;
        if(root == nullptr)
            return -1;
        
        while(root->left)
            root = root->left;
        
        return root->data;
    }
    int maximum()
    {
        Node *root = this->root;
        if(root == nullptr)
            return -1;
        
        while(root->right)
            root = root->right;
        
        return root->data;
    }
    int height(Node *root)
    {
        if(root == nullptr)
            return 0;
        
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        
        if(leftHeight > rightHeight)
            return leftHeight + 1;
        return rightHeight + 1;
    }
    bool search(int key)
    {
        Node *root = this->root;
        while(true)
        {
            if(root->data == key)
                return true;
            else if(key < root->data)
            {
                if(root->left == nullptr)
                    return false;
                root = root->left;
            }
            else 
            {
                if(root->right == nullptr)
                    return false;
                root = root->right;
            }
        }
    }
    Node *delNode(Node * current, int key)
    {
        if(current == nullptr)
            return nullptr;
        else if(key < current->data)
        {
            current->left = delNode(current->left, key);
        }
        else if(key > current->data)
        {
            current->right = delNode(current->right, key);
        }
        else 
        {
            if(current->left == nullptr && current->right == nullptr)
            {
                cout << current->data << " deleted." << endl;
                delete current;
                return nullptr;
            }
            else if(current->left != nullptr && current->right != nullptr)
            {
                int successorKey = getSuccessor(current);
                current->data = successorKey;
                current->right = delNode(current->right, successorKey);
            }
            else 
            {
                cout << current->data << " deleted." << endl;
                Node *temp;
                if(current->left != nullptr)
                    temp = current->left;
                else 
                    temp = current->right;
                delete current;
                return temp;
            }
        }
        return current;
    }
    int getSuccessor(Node *current)
    {
        current = current->right;
        while(current->left)
            current = current->left;
        return current->data;
    }
};
int main()
{
    BST bst;
    bst.insert(50);bst.insert(75);bst.insert(25);bst.insert(65);bst.insert(35);bst.insert(85);bst.insert(15);bst.insert(60);bst.insert(20);bst.insert(90);bst.insert(10);
    
    cout << "PreOrder : ";
    bst.preOrder(bst.getRoot());
    cout << endl;
    
    cout << "InOrder : ";
    bst.inOrder(bst.getRoot());
    cout << endl;
    
    cout << "PostOrder : ";
    bst.postOrder(bst.getRoot());
    cout << endl;
    
    cout << "Before Mirroring : ";
    bst.inOrder(bst.getRoot());
    cout << endl;
    
    bst.mirror(bst.getRoot());
    cout << "After Mirroring : ";
    bst.inOrder(bst.getRoot());
    cout << endl;
    
    bst.mirror(bst.getRoot());
    cout << "After Mirroring Again : ";
    bst.inOrder(bst.getRoot());
    cout << endl;
    
    cout << "Maximum Node Value of the Tree is : " << bst.maximum() << endl;
    cout << "Minimum Node Value of the Tree is : " << bst.minimum() << endl;
    cout << "Height of the Binary Search Tree is : " << bst.height(bst.getRoot()) << endl;
    
    int key;
    cout << "Enter the value to be searched : ";
    cin >> key;
    if(bst.search(key))
        cout << key << " found." << endl;
    else 
        cout << key << " not found." << endl;
        
    cout << endl;
    cout << "Tree Before Deletion of a node with No child" << endl;
    bst.inOrder(bst.getRoot());
    int delKey;
    cout << "\nEnter the Node to be deleted : ";
    cin >> delKey;
    bst.delNode(bst.getRoot(), delKey);
    cout << "After deletion " << endl;
    bst.inOrder(bst.getRoot());
    cout << endl;
    
    cout << endl;
    cout << "Tree Before Deletion of a node with single child" << endl;
    bst.inOrder(bst.getRoot());
    cout << "\nEnter the Node to be deleted : ";
    cin >> delKey;
    bst.delNode(bst.getRoot(), delKey);
    cout << "After deletion " << endl;
    bst.inOrder(bst.getRoot());
    cout << endl;
    
    cout << endl;
    cout << "Tree Before Deletion of a node with Two child" << endl;
    bst.inOrder(bst.getRoot());
    cout << "\nEnter the Node to be deleted : ";
    cin >> delKey;
    bst.delNode(bst.getRoot(), delKey);
    cout << "After deletion " << endl;
    bst.inOrder(bst.getRoot());
    
}