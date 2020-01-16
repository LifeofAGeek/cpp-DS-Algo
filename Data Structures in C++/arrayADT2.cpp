#include <iostream>
#include <cstdlib>

using namespace std;

struct Array
{
    int *A;
    int s;
    int length;
};

int Display(struct Array arr)
{
    for(int i=0;i<arr.length;i++)
        cout<<arr.A[i]<<endl;

    return 0;
}

int Append(struct Array *arr,int x)
{
    if((*arr).length<(*arr).s)
        (*arr).A[(*arr).length++]=x;
}
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

    Append(&arr,10);
    Display(arr);


}
