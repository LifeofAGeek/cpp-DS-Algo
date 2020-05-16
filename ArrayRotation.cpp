#include <iostream>
using namespace std;

void leftRotate(int arr[], int n, int d)
{
    int temp[n], i=0;
    while(i<=5){ //left rotation by d in O(n) time 
        if(d%n==0) d%=n;
        temp[i]=arr[d];
        if(d==(n-1-d)) break;
        i++, d++;
    }
    for(int x : temp) cout<<x<<" "; //left rotated array
}

int main()
{
    int n;
    cin>>n;//size of original array
    int arr[n];
    for(int& a:arr) cin>>a;
    int d;
    cin>>d;
    LeftRotate(arr,n,d);
    return 0;
}
