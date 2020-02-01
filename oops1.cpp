#include<iostream>
using namespace std;

class Rectangle
{
private:

    float length;
    float breadth;

public:

    float area()
    {
        return length*breadth;
    }

    float perimeter()
    {
        return 2*(length+breadth);
    }
    void setLengthBreadth(float l, float b) //accessors
    {
        length=l;
        breadth=b;
    }
    float getlength() //mutators
    {
        return length;
    }
    float getBreadth()
    {
        return breadth;
    }
};

int main()
{
    Rectangle r;
    r.setLengthBreadth(10,5);
    cout<<r.getlength()<<endl<<r.getBreadth()<<endl<<r.area()<<endl<<r.perimeter();
    return 0;
}
