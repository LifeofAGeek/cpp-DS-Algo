#include<bits/stdc++.h>
using namespace std;

struct Array
{
int A[10];
int size;
int length;
};

void Display(struct Array arr)
{
int i;
cout<<"Elements are"<<endl;
for(i=0;i<arr.length;i++)
    cout<<arr.A[i];
}


