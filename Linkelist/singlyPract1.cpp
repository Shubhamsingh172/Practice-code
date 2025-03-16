// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Node 
{
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = nullptr;
    }
    friend class linkedlist;
};
class linkedlist
{
    public:
    Node *head;
    linkedlist()
    {
        head = nullptr;
    }
    bool isfull()
    {
        return head == nullptr;
    }
    void insert(int data)
    {
        Node *temp = new Node(data);
        if(temp == nullptr)
        {
            head = temp;
            return;
        }
        else 
        {
            temp->next = head;
            head = temp;
        }
    }
    int Delete()
    {
        if(head == nullptr)
            cout << "\nLinked list is empty....\n";
        else 
        {
            Node *temp = head;
            head = head->next;
            if(head == nullptr)
                head == nullptr;
            return temp->data;
        }
    }
    void search(int data)
    {
        Node *temp = head;
        while(temp)
        {
            if(temp->data == data)
            {
                cout << temp->data << " is found in the linked list...\n";
                return;
            }
            temp = temp->next;
        }
        cout << data << "not found in the linked list...\n";
    }
    void display()
    {
        Node *temp = head;
        cout << "\nElements in the linkedlist are\n";
        while(temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};
int main() {
    linkedlist ll;
    ll.insert(10);
    ll.insert(20);
    ll.insert(30);
    ll.insert(40);
    ll.insert(50);
    ll.insert(60);
    ll.display();
    int key;
    cout << "\nEnter the key : ";
    cin >> key;
    ll.search(key);
    return 0;
}