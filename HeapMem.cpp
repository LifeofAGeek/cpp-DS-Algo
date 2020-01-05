#include <iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter number of elements"<<endl;
    cin>>size;
    int A[size];

    cout<<sizeof A<<endl;

    int *p=new int[size];

    delete p;

    int newsize;
    cout<<"Enter new size"<<endl;
    cin>>newsize;

    p=new int[newsize];
    return 0;
}
