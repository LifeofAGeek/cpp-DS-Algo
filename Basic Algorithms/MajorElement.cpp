#include<bits/stdc++.h>
using namespace std;

int findMajority(int arr[], int n)
{
    int major=0, c=0;
    for(int i=0;i<n;i++)
    {
        if(arr[major]==arr[i])
            c++;
        else
            c--;
        if(c==0)
            major=i;
            c=0;
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
    int a[] = {1,2,3,1};
    int n = (sizeof(a))/sizeof(a[0]);
    cout<<(isMajor(a,n)==1?"Major element exist!":"Major element does not exist!");
}
