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
