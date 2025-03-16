#include <iostream>
using namespace std;

class Node 
{
    int data;
    Node *next;
    Node *prev;
    Node(int d)
    {
        data = d;
        next = prev = nullptr;
    }
    friend class CircularLinkedList;
};
class CircularLinkedList
{
    Node *head;
    Node *tail;
    public:
    CircularLinkedList()
    {
        head = tail = nullptr;
    }
    void insertAtBegin(int data)
    {
        Node *temp = new Node(data);
        if(head == nullptr)
        {
            head = tail = temp;
            return;
        }
        temp->next = head;
        head->prev = temp;
        head = temp;
        head->prev = tail;
        tail->next = head;
    }
    void insertAtEnd(int data)
    {
        Node *temp = new Node(data);
        if(head == nullptr)
        {
            head = tail = temp;
            return;
        }
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
        tail->next = head;
        head->prev = tail;
    }
    void displayFromBegin()
    {
        cout << "Elements in the linkedlist are : ";
        Node *temp = head;
        do
        {
            cout << temp->data << " ";
            temp = temp->next;
        }while(temp != head);
        cout << endl;
    }
    void displayFromEnd()
    {
        cout << "Elements in the linkedlist are : ";
        Node *temp = tail;
        do
        {
            cout << temp->data << " ";
            temp = temp->prev;
        }while(temp != head);
        cout << endl;
    }
};
int main()
{
    CircularLinkedList cll;
    cll.insertAtBegin(10);
    cll.insertAtEnd(20);
    cll.insertAtBegin(5);
    cll.insertAtEnd(30);
    cout << "Displaying the element from the front side...\n";
    cll.displayFromBegin();
    cout << "Displaying the element from the Back side...\n";
    cll.displayFromEnd();
    return 0;
}