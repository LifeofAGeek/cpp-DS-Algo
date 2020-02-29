#include<bits/stdc++.h>
using namespace std;

void Display(int arr[], int n)
{
int i;
cout<<"Elements are"<<endl;
for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
}

int arrange(int arr[], int n)
{
    int i=0,j=n-1;
    while(i<j)
    {
        while(arr[i]<=0){i++;}
        while(arr[j]>0){j--;}
        if(i<j){swap(arr[i],arr[j]);}
    }
}

int main()
{
    int a[]={-2,3,4,5,-9,-3,-1,8};
    int n=sizeof(a)/sizeof(a[0]);
    arrange(a,n);
    Display(a,n);
}
