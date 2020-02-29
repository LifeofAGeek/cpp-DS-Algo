#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,temp;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++) cin>>A[i];
    for(int j=0;j<=(int)((n-1)/2);j++)
    {
        temp=A[j];
        A[j]=A[(n-1)-j];
        A[(n-1)-j]=temp;
    }
    for(int i=0;i<n;i++) cout<<A[i];
    return 0;
}
