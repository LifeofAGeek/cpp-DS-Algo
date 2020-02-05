#include<bits/stdc++.h>
using namespace std;

class test
{
    int a;
    int *p;

    test(int x)
    {
        a=x;
        p=new int[a];
    }

    test(test &t)
    {
        a=t.a;
        p=new int[a]; //instead p=t.p which will just pointing to the same p i.e, shallow copy
    }
};

