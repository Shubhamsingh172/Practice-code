#include <iostream>
using namespace std;

class Node 
{
    int data;
    Node *prev;
    Node *next;
    Node(int d):data(d)
    {
        prev = next = nullptr;
    }
    friend class CircularLinkedlist;
};
class CircularLinkedlist
{
    Node *head;
    Node *tail;
    public:
    CircularLinkedlist()
    {
        head = tail = nullptr;
    }
    void insertAtBeg(int element)
    {
        Node *p = new Node(element);
        if(head == nullptr)
        {
            head = tail = p;
            return;
        }
        p->next = head;
        head->prev = p;
        head = p;
        head->prev = tail;
        tail->next = head;
    }
    void insertAtEnd(int element)
    {
        Node *p = new Node(element);
        if(head == nullptr)
        {
            head = tail = p;
            return;
        }
        tail->next = p;
        p->prev = tail;
        tail = p;
        tail->next = head;
        head->prev = tail;
    }
    void deleteAtBeg()
  {
        if(head == nullptr)
        {
            cout << "\nList is Empty.\n";
            return;
        }
        if(head == tail)
        {
            head = tail = nullptr;
        }
        Node *temp = head;
        head = head->next;
        head->prev = tail;
        tail->next = head;
        cout << temp->data << " deleted successfully.\n";
        delete temp;
    }
    void deleteAtEnd()
    {
        if(head == nullptr)
        {
            cout << "\nList is Empty.\n";
            return;
        }
        if(head == tail)
        {
            head = tail = nullptr;
        }
        Node *temp = tail;
        tail = tail->prev;
        tail->next = head;
        head->prev = tail;
        cout << temp->data << " deleted successfully.\n";
        delete temp;
    }
    void showList()
    {
        if(head == nullptr)
        {
            cout << "List is Empty.\n";
            return;
        }
        Node *temp = head;
        do
        {
            cout << temp->data << " ";
            temp = temp->next;
        }while(temp != head);
        cout << endl;
    }
};
int main()
{
    CircularLinkedlist cll;
    while(true)
    {
        cout << "\n----------------------MENU-------------------\n";
        cout << "\n1.Insert at Begin.\n";
        cout << "2.Insert at End.\n";
        cout << "3.Delete at Begin.\n";
        cout << "4.Delete at End.\n";
        cout << "5.Display the list.\n";
        cout << "6.Exit the program.\n";
        
        int choice;
        cout << "\nEnter your choice : ";
        cin >> choice;
        
        switch(choice)
        {
            case 1:
                int element;
                cout << "\nEnter the element to be inserted : ";
                cin >> element;
                cll.insertAtBeg(element);
                break;
            
            case 2:
                int element1;
                cout << "\nEnter the element to be inserted : ";
                cin >> element1;
                cll.insertAtEnd(element1);
                break;
            
            case 3:
                cll.deleteAtBeg();
                break;
            
            case 4:
                cll.deleteAtEnd();
                break;
            
            case 5:
                cll.showList();
                break;
            
            case 6:
                cout << "\nThank you for using this program have a nice day ahead...." << endl;
                exit(0);
            
            default:
                cout << "\nInvalid choice please try Again...";
        }
    }
    return 0;
}