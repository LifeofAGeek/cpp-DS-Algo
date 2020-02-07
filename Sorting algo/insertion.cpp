#include<bits/stdc++.h>
using namespace std;

void swaping(int *xp, int *yp)
{
int temp = *xp;
*xp = *yp;
*yp = temp;
}

int display(int arr[], int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<endl;
}

int InsertionSort(int A[], int n)
{
    int value,hole;
    for(int i=1;i<n;i++)
    {
        value=A[i];
        hole=i;
        while(hole>0 && A[hole-1]>value)
        {
            swaping(&A[hole],&A[hole-1]);
            hole--;
        }
        A[hole]=value;
    }

}

int main()
{
    int A[]={2,5,31,22,9,74,11,32,7,87,65,40,44,86,91,63};
    int n=sizeof(A)/sizeof(A[0]);
    InsertionSort(A,n);
    display(A,n);
}

