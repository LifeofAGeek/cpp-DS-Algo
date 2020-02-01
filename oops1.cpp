#include<iostream>
using namespace std;

class Rectangle
{
private:

    float length;
    float breadth;

public:

    Rectangle() //non-parametrized constructor
    {
        length=0;
        breadth=0;
    }

    Rectangle(float l, float b) //parametrized constructor
    {
        setLengthBreadth(l);
        setLengthBreadth(b);
    }

    Rectangle(Rectangle &rect) //copy constructor
    {
        length=rect.length;
        breadth=rect.breadth;
    }

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
    Rectangle r1,r2;
    r1.setLengthBreadth(10,5);
    cout<<r1.getlength()<<endl<<r1.getBreadth()<<endl<<r1.area()<<endl<<r1.perimeter();
    return 0;
}
