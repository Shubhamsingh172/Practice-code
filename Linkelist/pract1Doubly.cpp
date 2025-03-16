#include <iostream>
using namespace std;

class Node 
{
    int data;
    Node *next;
    Node *prev;
    Node(int data)
    {
        this->data = data;
        next = prev = nullptr;
    }
    friend class DoublyLinkedlist;
};

class DoublyLinkedlist 
{
    Node *head;
    Node *tail;
    public:
    DoublyLinkedlist()
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
        tail = tail->next; // or tail = temp i think so ye hona chahiye let see while testing.
        //it is valid (tail = temp)
    }
    void deleteAtBegin()
    {
        Node *temp = head;
        if(head == nullptr)
            head = tail = nullptr;
        head = head->next;
        cout << endl << temp->data << " deleted successfully from Begin.\n";
        delete temp;
    }
    void deleteAtEnd()
    {
        Node *temp = tail;
        if(head == nullptr)
            head = tail = nullptr;
        tail = tail->prev;
        cout << endl << temp->data << " deleted successfully from End.\n";
        tail->next = nullptr;
        delete temp;
    }
    void display()
    {
        Node *temp = head;
        cout << "Elements are\n";
        while(temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};

int main()
{
    DoublyLinkedlist dll;
    dll.insertAtEnd(10);
    dll.insertAtEnd(20);
    dll.insertAtEnd(30);
    dll.insertAtEnd(40);
    dll.insertAtBegin(5);
    dll.insertAtBegin(2);
    dll.display();
    dll.deleteAtBegin();
    cout << "After deletion of Node" << endl;
    dll.display();
    dll.deleteAtEnd();
    cout << "After deletion of Node" << endl;
    dll.display();
    return 0;
}