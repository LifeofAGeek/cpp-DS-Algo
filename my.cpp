#include<iostream>
#include<math.h>
using namespace std;
int main()
{   int x;
    cin>>x;
    if (x>5)
        cout<<++x;
    else if (x<5 & x>0)
        cout<<++x;
    else
        cout<<x;
    return 0;
}
