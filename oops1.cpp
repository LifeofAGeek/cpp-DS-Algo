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
    Rectangle r1;
    r1.length=10;
    r1.breadth=5;
    cout<<r1.area()<<endl;
    Rectangle *p=new Rectangle;
    p->length=15;
    p->breadth=3;
    cout<<p->area();
    return 0;
}
