#include <iostream>
using namespace std;

class SetOp
{
    int arr[100];
    int count;
    public:
    SetOp()
    {
        count = 0;
    }
    void insert();
    int search(int);
    void remove();
    void display();
    void size();
    void unions(SetOp, SetOp);
    void interSection(SetOp, SetOp);
    void difference(SetOp, SetOp);
    void subSet(SetOp, SetOp);
};
void SetOp::insert()
{
    int n;
    cout << "Enter the number of element you want to insert : ";
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        arr[count++] = element;
    }
    cout << "\nElement for set is inserted Successfully.\n";
}
int SetOp::search(int key)
{
    for(int i = 0; i < count; i++)
        if(arr[i] == key)
            return i;
    return -1;
}
void SetOp::remove()
{
    int key;
    cout << "Enter the element to be removed from the set : ";
    cin >> key;
    if(search(key) == count - 1)
    {
        count--;
        return;
    }
    for(int i = search(key); i < count; i++)
        arr[i] = arr[i + 1];
    cout << key << " deleted successfully.\n";
    count--;
}
void SetOp::display()
{
    cout << "Set Elements are" << endl;
    for(int i = 0; i < count; i++)
        cout << arr[i] << " ";
}
void SetOp::size()
{
    cout << "Size of the set is : " << count << endl;
}
void SetOp::unions(SetOp s1, SetOp s2)
{
    for(int i = 0; i < s1.count; i++)
        arr[count++] = s1.arr[i];
    
    for(int i = 0; i < s2.count; i++)
        if(s1.search(s2.arr[i]) == -1)
            arr[count++] = s2.arr[i];
    
    cout << "\nUnion of the Two set are" << endl;
    cout << "Set Elements : ";
    for(int i = 0; i < count; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void SetOp::interSection(SetOp s1, SetOp s2)
{
    for(int i = 0; i < s1.count; i++)
        if(s1.search(s2.arr[i]) != -1 && i <= s2.count)
            arr[count++] = s2.arr[i];
    
    cout << "\nIntersection of the two Sets are" << endl;
    cout << "Set Elements : ";
    for(int i = 0; i < count; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void SetOp::difference(SetOp s1, SetOp s2)
{
    for(int i = 0; i < s1.count; i++)
        if(s1.search(s2.arr[i]) == -1 && i <= s2.count)
            arr[count++] = s2.arr[i];
            
    cout << "\nDifference of the two Sets are" << endl;
    cout << "Set Elements : ";
    for(int i = 0; i < count; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void SetOp::subSet(SetOp s1, SetOp s2)
{
    for(int i = 0; i < s2.count; i++)
        if(s2.search(s1.arr[i]) != -1)
            count++;
        
    if(count == s1.count)
        cout << "\nS1 is the subset of S2" << endl;
    else 
        cout << "\nS1 is not a subset of S2" << endl;
    cout << endl;
}
int main()
{
    SetOp s1;
    while(true)
    {
        cout << "\n------------MENU------------" << endl;
        cout << "\n1.Insert the Element." << endl;
        cout << "2.Display the Element." << endl;
        cout << "3.Delete the Element." << endl;
        cout << "4.Size of the Element." << endl;
        cout << "5.Union Operation." << endl;
        cout << "6.Intersection Operation." << endl;
        cout << "7.Difference Operation." << endl;
        cout << "8.Subset." << endl;
        cout << "9.Exit." << endl;
        
        int choice;
        cout << "\nEnter your choice : ";
        cin >> choice;
        
        switch(choice)
        {
            case 1:
                s1.insert();
                break;
            
            case 2:
                s1.display();
                break;
            
            case 3:
                s1.remove();
                break;
            
            case 4:
                s1.size();
                break;
            
            case 5:
            {
                SetOp s2, s3, s4;
                cout << "Enter the element for Set 1" << endl;
                s2.insert();
                cout << "Enter the element for Set 2" << endl;
                s3.insert();
                s4.unions(s2, s3);
                break;
            }
            
            case 6:
            {
                SetOp s2, s3, s4;
                cout << "\nEnter the element for Set 1" << endl;
                s2.insert();
                cout << "\nEnter the element for Set 2" << endl;
                s3.insert();
                s4.interSection(s2, s3);
                break;
            }
            
            case 7:
            {
                SetOp s2, s3, s4;
                cout << "\nEnter the element for Set 1" << endl;
                s2.insert();
                cout << "\nEnter the element for Set 2" << endl;
                s3.insert();
                s4.difference(s2, s3);
                break;
            }
            
            case 8:
            {
                SetOp s2, s3, s4;
                cout << "\nEnter the element for Set 1" << endl;
                s2.insert();
                cout << "\nEnter the element for Set 2" << endl;
                s3.insert();
                s4.subSet(s2, s3);
                break;
            }
            
            case 9:
                cout << "\nThank you for using this Program..." << endl;
                exit(0);
            
            default:
                cout << "\nWrong Choice Please Try Again...." << endl; 
        }
    }
    return 0;
}