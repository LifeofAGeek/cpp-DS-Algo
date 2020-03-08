#include<bits/stdc++.h>
using namespace std;

int Add(int a, int b)
{
    return a+b;
}

int main()
{
    int c;
    int (*p)(int,int); //function pointer
    p=Add;
    c=(*p)(5,5);
    printf("%d",c);
}
