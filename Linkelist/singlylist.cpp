#include <iostream>
using namespace std;

class Node
{
    int data;
    Node *next;
    Node(int d):data(d),next(nullptr){}
    friend class singlyList;
};
class singlyList
{
    Node * head;
    public:
    singlyList():head(NULL){}
    void insertAtBeg(int element)
    {
        Node *p = new Node(element);
        if(head == nullptr)
        {
            head = p;
            return;
        }
        p->next = head;
        head = p;
    }
    void deleteAtBeg()
    {
        if(head == nullptr)
        {
            cout << "Linkedlist is Empty.\n";
            return;
        }
        Node *temp = head;
        head = head->next;
        // if(head == nullptr)
        cout << temp->data << " deleted successfully.\n";
        delete temp;
    }
    void insertAtEnd(int element)
    {
        Node *p = new Node(element);
        if(head == nullptr)
        {
            head = p;
            return;
        }
        Node *q;
        for(q = head; q->next != nullptr; q = q->next);
        q->next = p;
    }
    void deleteAtEnd()
    {
        if(head == nullptr)
            cout << "Linkedlist is empty.\n";
        Node *p;
        for(p = head; p->next->next != nullptr; p = p->next);
        Node *q = p->next;
        p->next = nullptr;
        cout << q->data << " deleted successfully." << endl;
        delete q;
    }
    void showList()
    {
        cout << "\nLinkedlist Element is" << endl;
        for(Node *p = head; p != nullptr; p = p->next)
        {
            cout << p->data << " ";
        }
        cout << endl;
    }
};
int main()
{
    singlyList sl;
    while(true)
    {
        cout << "\n---------------MENU--------------\n";
        cout <<"\n1.Insert at Begin.\n";
        cout << "2.Insert at End.\n";
        cout << "3.Delete at Begin.\n";
        cout << "4.Delete at End.\n";
        cout << "5.Display the list.\n";
        cout << "6.Exit the program.\n";
        
        int choice;
        cout << "\nEnter a choice : ";
        cin >> choice;
        
        switch(choice)
        {
            case 1:
                int element;
                cout << "\nEnter an element to be insert : ";
                cin >> element;
                sl.insertAtBeg(element);
                break;
            
            case 2:
                int ele;
                cout << "Enter an element to be insert : ";
                cin >> ele;
                sl.insertAtEnd(ele);
                break;
            
            case 3:
                sl.deleteAtBeg();
                break;
                
            case 4:
                sl.deleteAtEnd();
                break;
                
            case 5:
                sl.showList();
                break;
            
            case 6:
                cout << "\nThank you for using this program have a nice day ahead...." << endl;
                exit(0);
            
            default:
                cout << "\nInvalid Choice Please try Again.\n";
        }
    }
    return 0;
}