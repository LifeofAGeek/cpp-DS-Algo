#include<bits/stdc++.h>
using namespace std;

int findMajority(int arr[], int n)
{
    int major=0, c=0;
    for(int i=0;i<n;i++)
    {
        if(arr[major]==arr[i]) c++;
        else
            c--;
        if(c==0)
            major=i;
    }
    return arr[major];
}

int isMajor(int arr[], int n)
{
    int major=findMajority(arr,n);
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==major)
            c++;
    }
    if(c>=n/2)
            return 1;
        else
            return 0;
}

int main()
{
    int a[] = {1,3,3,1,2,2};
    int n = (sizeof(a))/sizeof(a[0]);
    cout<<findMajority(a,n);
}
