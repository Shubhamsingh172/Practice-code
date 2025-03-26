#include <iostream>
using namespace std;

class Dog
{
    public:
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
//we have to declare it outside the class then it will went to its static memory which is fixed
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