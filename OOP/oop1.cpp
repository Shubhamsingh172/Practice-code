#include <iostream>
using namespace std;

class Dog
{
    public:
    string name;
    int age;
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
    
    return 0;
}