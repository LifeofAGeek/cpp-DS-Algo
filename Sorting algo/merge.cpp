#include<bits/stdc++.h>
using namespace std;

int display(int arr[])
{
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<endl;
}

int Merge(int L[], int R[], int A[])
{
    int nL=sizeof(L)/sizeof(L[0]);
    int nR=sizeof(R)/sizeof(R[0]);
    int n=sizeof(A)/sizeof(A[0]);
    int i=0,j=0,k=0;

    while(i<nL && j<nR)
    {
        if(L[i]<=R[j])
           {
            A[k]=L[i];
            i++;
           }
        else
           {
            A[k]=R[j];
            j++;
           }
        k++;
    }

    while(i<nL)
        A[k]=L[i];
        k++;
        i++;

    while(j<=nR)
        A[k]=R[j];
        k++;
        j++;
}

int MergeSort(int A[])
{
    int n=sizeof(A)/sizeof(A[0]);
    int mid=n/2;
    int left[mid],right[n-mid];

    if(n==1){
        return 0;
    }

    for(int i=0;i<mid;i++)
        left[i]=A[i];
    for(int i=mid;i<n;i++)
        right[i]=A[i];

    MergeSort(left);
    MergeSort(right);
    Merge(left,right,A);
}



int main()
{
    int A[]={2,5,31,22,9,74,11};
    MergeSort(A);
    display(A);
}

