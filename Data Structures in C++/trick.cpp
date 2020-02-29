#include<bits/stdc++.h>
using namespace std;

void trick(int *t1,int *t2)
{
    int *t=t1;
    t1=t2;
    t2=t;
}

int main()
{
    int a=1,b=2,c=3;
    trick(&a,&b);
    trick(&a,&c);
    cout<<b;
}
