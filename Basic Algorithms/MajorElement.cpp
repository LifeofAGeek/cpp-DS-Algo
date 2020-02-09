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
}

bool isMajor(int major, int arr[], int n)
{
    for(int i)
}
