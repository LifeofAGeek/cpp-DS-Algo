#include<iostream>
using namespace std;

class Rectangle
{
private:

    float length;
    float breadth;

public:

    Rectangle(float l=0, float b=0) //parametrized constructor
    {
        length=l;
        breadth=b;
    }

    float area()
    {
        return length*breadth;
    }

};

int main()
{
    unique_ptr<Rectangle> p(new Rectangle(10,5));
    cout<<p->area()<<endl;
}
