#include <iostream>
using namespace std;

class Node
{
	int data;
	Node *left;
	Node *right;

	Node(int d)
	{
		data = d;
		left = right = NULL;
	}
	friend class BST;
};

class BST
{
	Node *root = NULL;

public:
	void insert(Node *root, Node *newNode)
	{
		if (root == NULL) // for the first node only
		{
			this->root = newNode;
			return;
		}

		if (newNode->data < root->data)
		{
			if (root->left)
				insert(root->left, newNode);
			else
				root->left = newNode;
		}
		else
		{
			if (root->right)
				insert(root->right, newNode);
			else
				root->right = newNode;
		}
	}
	void insert(int d) // for a single element only
	{
		insert(root, new Node(d));
	}
	void createTree(int input[], int n)
	{
		for (int i = 0; i < n; i++)
			insert(root, new Node(input[i]));
	}
	void inorder(Node *root)
	{
		if (root)
		{
			inorder(root->left);
			cout << root->data << " ";
			inorder(root->right);
		}
	}
	Node *getRoot()
	{
		return root;
	}
	int minimum(Node *root)
	{
		if (root == NULL)
			return -1;

		if (root->left == NULL)
			return root->data;
		return minimum(root->left);
	}

	int maximum(Node *root)
	{
		if (root == NULL)
			return -1;

		if (root->right == NULL)
			return root->data;
		else
			return maximum(root->right);
	}
	int depth(Node *root)
	{
		if (root == NULL) // base condition
			return 0;

		int ldepth = depth(root->left);
		int rdepth = depth(root->right);

		if (ldepth > rdepth)
			return ldepth + 1;
		return rdepth + 1;
	}
	void mirror(Node *root)
	{
		if (root == NULL)
			return;

		mirror(root->left);
		mirror(root->right);

		Node *temp = root->left;
		root->left = root->right;
		root->right = temp;
	}
    void descending(Node *root)
    {
        if(root)
        {
            descending(root->right);
            cout << root->data << " ";
            descending(root->left);
        }
    }
};
int main()
{
	BST bst;
	int input[] = {35, 50, 20, 45, 65, 15, 19, 30, 34, 33, 75, 60};
	//{50, 70, 40, 80, 30, 45, 65, 20, 35, 42};
	bst.createTree(input, sizeof(input) / sizeof(int));
	cout << "Inorder : ";
	bst.inorder(bst.getRoot());
	cout << endl;
	cout << "Minimum : " << bst.minimum(bst.getRoot()) << endl;
	cout << "Maximum : " << bst.maximum(bst.getRoot()) << endl;
	cout << "Depth : " << bst.depth(bst.getRoot()) << endl;

	bst.mirror(bst.getRoot());
	cout << "Inorder after Mirror : ";
	bst.inorder(bst.getRoot());
	cout << endl;

	bst.mirror(bst.getRoot());
	cout << "Inorder after Mirroring again : ";
	bst.inorder(bst.getRoot());

	cout << endl;

	bst.insert(40);

	cout << "Inorder : ";
	bst.inorder(bst.getRoot());
    cout <<"\nTree Nodes in Descending Order. : "; 
    bst.descending(bst.getRoot());
	cout << endl;
}
