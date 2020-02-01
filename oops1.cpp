#include<iostream>
using namespace std;

class Rectangle
{
private:

    float length;
    float breadth;

public:

    //constructor overloading

    Rectangle() //non-parametrized constructor
    {
        length=0;
        breadth=0;
    }

    Rectangle(float l=0, float b=0) //parametrized constructor
    {
        length=l;
        breadth=b;
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
    Rectangle r1(10,5);
    Rectangle r2(r1);
    //r1.setLengthBreadth(10,5);
    cout<<"obj: r1"<<endl<<r1.getlength()<<endl<<r1.getBreadth()<<endl<<r1.area()<<endl<<r1.perimeter();
    cout<<"obj: r2"<<endl<<r2.getlength()<<endl<<r2.getBreadth()<<endl<<r2.area()<<endl<<r2.perimeter();
    return 0;
}
