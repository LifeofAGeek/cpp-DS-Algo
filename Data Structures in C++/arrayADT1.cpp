#include <iostream>
#include <cstdlib>

using namespace std;

struct Array
{
    int *A;
    int s;
    int length;
};

int main()
{
    struct Array arr;
    cout<<"Enter size of array";
    cin>>arr.s;

    int n,i;
    arr.A=new int[arr.s];
    cout<<"enter number of element";
    cin>>n;
    arr.length=n;
    for(i=0;i<n;i++)
        cin>>arr.A[i];

    for(i=0;i<arr.s;i++)
        cout<<arr.A[i];
}
