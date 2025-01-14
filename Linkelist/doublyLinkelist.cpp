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
    friend class DoublyLinkedList;
};
class DoublyLinkedList
{
    Node *head;
    Node *tail;
    public:
    DoublyLinkedList()
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
    }
    void deleteAtBeg()
    {
        if(head == nullptr) // 0 nodes means no element at present
        {
            cout << "List is empty.\n";
            return;
        }
        else // list having 1 node only
        {
            Node *p = head;
            head = head->next;
            head->prev = nullptr;
            if(head == nullptr)
                head = tail = nullptr;
            cout << p->data << " deleted successfully.\n";
            delete p;
        }
    }
    void deleteAtEnd()
    {
        if(head == nullptr)
        {
            cout << "\nList is Empty.\n";
            return;
        }
        else
        {
            Node *p = tail;
            tail = tail->prev;
            tail->next = nullptr;
            if(tail == nullptr)
                tail = nullptr;
            cout << p->data << " deleted successfully.\n";
            delete p;
        }
    }
    void showList(int dir)
    {
        cout << "\nForwardly Displaying the element.\n";
        if(dir == 1) // forward printing the list 
        {
            for(Node *temp = head; temp != nullptr; temp = temp->next)
            {
                cout << temp->data << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "\nBackwardly Displaying the element.\n";
            for(Node *temp = tail; temp != nullptr; temp = temp->prev)
            {
                cout << temp->data << " ";
            }
            cout << endl;
        }
    }
};
int main()
{
    DoublyLinkedList dll;
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
                dll.insertAtBeg(element);
                break;
            
            case 2:
                int element1;
                cout << "\nEnter the element to be inserted : ";
                cin >> element1;
                dll.insertAtEnd(element1);
                break;
            
            case 3:
                dll.deleteAtBeg();
                break;
            
            case 4:
                dll.deleteAtEnd();
                break;
            
            case 5:
                int dir;
                cout << "\nEnter 1 for forward displaying : ";
                cin >> dir;
                dll.showList(dir);
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