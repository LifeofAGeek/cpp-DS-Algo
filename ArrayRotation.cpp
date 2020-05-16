#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;//size of original array
    int arr[n];
    for(int& a:arr) cin>>a;
    int temp[n]; 
    int i=0,d;
    cin>>d;
    while(i<=5){ //left rotation by d in O(n) time 
        if(d%n==0) d%=n;
        temp[i]=arr[d];
        if(d==(n-1-d)) break;
        i++, d++;
    }
    for(int x : temp) cout<<x<<" "; //left rotated array
    return 0;
}
