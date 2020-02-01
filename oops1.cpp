#include<iostream>
using namespace std;

class Rectangle
{
public:

    float length;
    float breadth;

    float area()
    {
        return length*breadth;
    }

    float perimeter()
    {
        return 2*(length+breadth);
    }
};

int main()
{
    Rectangle r1,*r2;
    r1.length=10;
    r1.breadth=5;
    r2->length=15;
    r2->breadth=3;
    cout<<r1.area()<<endl;
    cout<<r2->area();
}
