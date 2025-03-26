#include <iostream>
using namespace std;

class Box 
{
    double height;
    double width;
    double depth;
    public:
    Box()
    {
        height = 0.0;
        width = 0.0;
        depth = 0;
    }
    void setDimension(double h, double w, double d)
    {
        height = h;
        width = w;
        depth = d;
    }
    void display(string who)
    {
        cout << who << endl;
        cout << "Height : " << height << endl;
        cout << "Width : " << width << endl;
        cout << "Depth : " << depth << endl;
        cout << endl;
    }
    double volume()
    {
        return height * width * depth;
    }
};
int main()
{
    Box b1;
    b1.setDimension(1.1, 2.2, 3.3);
    b1.display("B1");
    cout << "Volume of the Box B2 is : " << b1.volume();

    Box b2;
    b2.setDimension(11.11, 22.22, 33.33);
    b2.display("B2");
    cout << "Volume of the Box B2 is : " << b2.volume();
    
    return 0;

}