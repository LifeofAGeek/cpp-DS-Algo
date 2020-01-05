#include <iostream>
using namespace std;
int main()
{
    int *p=new int[5];
    p[0]=1;
    p[1]=2;
    cout<<p[1]<<endl;

    delete []p;
    p=nullptr;
}
