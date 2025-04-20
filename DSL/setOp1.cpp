// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class setop
{
    int arr[10];
    int count;
    public:
     setop()
     {
      count = 0;
     }
     
        void insert()
        {
        int n;
            cout << "Enter the number of element you want to insert : ";
            cin >> n;
            for(int i = 0; i < n; i++)
            {
            int ele;
            cin >> ele;
            arr[count++] = ele;
            }
        }
        int search(int);
        void removes();
        void display();
        void size();
        void unions(setop, setop);
        void intersection(setop, setop);
        void difference(setop, setop);
        void Subset(setop, setop);

};
int setop::search(int key)
{
    for(int i = 0; i < count; i++)
    {
        if(arr[i] == key)
            return i;
    }
    return -1;
}
void setop:: removes()
{
    int ele;
    cout << "Enter the element to be removed : ";
    cin >> ele;
    int index = search(ele);
    if(index == count)
    {
        count--;
        return;
    }
   
    for(int i = index; i < count-1; i++)
    {
        arr[i] = arr[i+1];
    }
    count--;
}
void setop::display()
{
    cout << "Set element are" << endl;
    for(int i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    }
}
void setop::size()
{
    cout << "Size of the set is : " << count << endl;
}

void setop::unions(setop s1, setop s2)
{
    for(int i = 0; i < s1.count; i++)
    {
        arr[count++] = s1.arr[i];
    }
   
    for(int i = 0; i < s2.count; i++)
    {
        if(s1.search(s2.arr[i]) == -1)
            arr[count++] = s2.arr[i];
    }
   
    cout << "Union of the two set is\n";
    for(int i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void setop::intersection(setop s1, setop s2)
{
    for(int i = 0; i < s1.count; i++)
    {
        if(s1.search(s2.arr[i]) != -1)
            arr[count++] = s2.arr[i];
    }
   
    cout << "Intersection of the two set is\n";
    // cout << "s1 count : " << s1.count << endl;
    // cout << "s2 count : " << s2.count << endl;
    // cout << "actual object count : " << count << endl;
    for(int i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void setop::difference(setop s1, setop s2)
{
    for(int i = 0; i < s1.count; i++)
    {
        if(s2.search(s1.arr[i]) == -1)
            arr[count++] = s1.arr[i];
    }
   
    cout << "Difference of the two set is\n";
    // cout << "s1 count : " << s1.count << endl;
    // cout << "s2 count : " << s2.count << endl;
    // cout << "actual object count : " << count << endl;
    for(int i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void setop::Subset(setop s1, setop s2)
{
    for(int i = 0; i < s1.count; i++)
    {
        if(s2.search(s1.arr[i]) != -1)
            count++;
    }
   
    if(count == s1.count)
        cout << "s1 is a subset of s2\n";
    else
        cout << "s1 is not a subset of s2\n";
    cout << endl;
}

int main()
{
    setop s1;
    while(true)
    {
        cout << "\n------------------MENU----------------------\n";
        cout << "\n1.Insert the element." << endl;
        cout << "2.Display the element.\n";
        cout << "3.Delete the element." << endl;
        cout << "4.Size of the set." << endl;
        cout << "5.Union." << endl;
        cout << "6.Intersection.\n";
        cout << "7.Difference.\n";
        cout << "8.Subset.\n";
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
                s1.removes();
                break;
           
            case 4:
                s1.size();
                break;
               
            case 5:
            {
                setop s2,s3,s4;
                cout << "Enter the element for set 1\n";
                s2.insert();
                cout << "\nEnter the element for set 2\n";
                s3.insert();
                //union operation
                s4.unions(s2, s3);
                break;
            }
           
            case 6:
            {
                setop s2,s3,s4;
                cout << "Enter the element for set 1\n";
                s2.insert();
                cout << "\nEnter the element for set 2\n";
                s3.insert();
                //union operation
                s4.intersection(s2, s3);
                break;
            }
           
            case 7:
            {
                setop s2,s3,s4;
                cout << "Enter the element for set 1\n";
                s2.insert();
                cout << "\nEnter the element for set 2\n";
                s3.insert();
                //union operation
                s4.difference(s2, s3);
                break;
            }
           
            case 8:
            {
                setop s2,s3,s4;
                cout << "Enter the element for set 1\n";
                s2.insert();
                cout << "\nEnter the element for set 2\n";
                s3.insert();
                //union operation
                s4.Subset(s2, s3);
                break;
            }
           
            case 9:


                cout << "\nThank you for using this program.\n";
                exit(0);
               
            default:
                cout << "\nInvalid Choice Please Try Again......" << endl;
        }
    }
}