#include <iostream>
using namespace std;
int maximum(int x,int y)
{
    return x>y?x:y;
}

int minimum(int x,int y)
{
    return x<y?x:y;
}

int main()
{
    int (*fp)(int,int);
    fp=maximum;
    int maxi=(*fp)(10,5);
    cout<<maxi<<endl;

    fp=minimum;
    int mini=(*fp)(10,5);
    cout<<mini;

    return 0;
}

