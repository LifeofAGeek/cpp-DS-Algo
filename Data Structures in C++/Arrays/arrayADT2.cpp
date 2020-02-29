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
    cout<<"Appended array"<<endl;
    if((*arr).length<(*arr).s)
        (*arr).A[(*arr).length++]=x;
}

int Insert(struct Array *arr,int index,int value)
{
        cout<<"inserted value = "<<value<<endl;
        if(arr->length<arr->s)
            for(int i=arr->length;i>index;i--)
                arr->A[i]=arr->A[i-1];
        arr->A[index]=value;
        arr->length++;
}

int Delete(struct Array *arr,int index)
{
    int x=0;
    int i;
    if(index>=0 && index<arr->length)
    {
        x=arr->A[index];
        for(i=index;i<arr->length-1;i++)
            arr->A[i]=arr->A[i+1];
        arr->length--;
        return x;
    }
    return 0;
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
    Insert(&arr,3,12);
    Display(arr);
    cout<<"Deleted element "<<Delete(&arr,4);
    Display(arr);


}
