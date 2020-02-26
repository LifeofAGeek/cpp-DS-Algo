#include <iostream>
using namespace std;

void Arrange_Even_Odd(int arr[], int n, int i=0, int prev=0) // i -> iteration, n -> length of array, prev -> stores previous odd number index and arr[] -> original array
{
    if(i==n)
    {
        return;
    }
    if (arr[i]%2!=0)
    {
        int temp = arr[prev]; //swap even and odd element position
        arr[prev] = arr[i];
        arr[i] = temp;
        prev++;
    }
    Arrange_Even_Odd(arr,n,i+1,prev);
}
int main()
{
    int a[]={2,3,1,5,6,11,7,9,8,12,22};
    int n=sizeof(a)/sizeof(a[0]);
    Arrange_Even_Odd(a,n);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
