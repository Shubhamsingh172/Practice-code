#include <iostream>
using namespace std;

class Dog
{
    public:
    /*
    **Static Variables in a Class
    1.A static data member of a class is shared among all objects of that class.
    2.It belongs to the class rather than any particular object.
    3.It must be defined and initialized outside the class because it has a single 
    memory location in the program.
    */
    static int count;
    string name;
    int age;
    Dog()
    {
        name = "";
        age = 0;
        count++;
    }
    void setName(string n)
    {
        name = n;
    }
    void setAge(int a)
    {
        age = a;
    }
    void showDetails(string who)
    {
        cout << who << endl;
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << endl;
    }
};
int Dog::count = 0;
/*
Why Declare Inside but Define Outside?
Ans:1.When we declare a static member inside the class, it informs the compiler 
    about its existence.
    2.However, it does not allocate memory at this point.
    3.Since static members must have a single definition across all translation units, 
    defining it outside the class ensures proper memory allocation.
*/
int main()
{
    Dog D1;
    D1.setName("Cherry");
    D1.setAge(2);
    D1.showDetails("D1");

    //similarly we can add many dog object as we declare and defined above 

    Dog D2;
    D2.setName("Bruno");
    D2.setAge(5);
    D2.showDetails("D2");

    cout << "There are " << Dog::count << " Dogs we have declared.\n";
    return 0;
}