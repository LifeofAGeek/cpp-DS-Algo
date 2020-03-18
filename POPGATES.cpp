#include<bits/stdc++.h>
using namespace std;
//head=1 and tail=0

int count_head(int arr[],int k,bool x)
{
    int c=0;
    for(int i=0;i<k;i++)
    {
        if(arr[i]==x) c++;
    }
    return c;
}

int popgates(int arr[],int n, int k)
{
    if(arr[n-k]==false) return count_head(arr,k,true);
    return count_head(arr,k,false);
}



int main()
{
    int arr[]={1,1,0,0,0,1};
    cout<<"Number of heads is = "<<popgates(arr,6,3);
}
