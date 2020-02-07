#include<bits/stdc++.h>
using namespace std;

int Partition(int *A,int start, int End)
{
    int pivot=A[End];
    int pIndex=start;
    for(int i=start;i<=End-1;i++)
    {
        if(A[i]<=pivot)
        {
            swap(A[i],A[pIndex]);
            pIndex++;
        }
    }
    swap(A[pIndex],A[End]);
    return pIndex;
}

void QuickSort(int *A, int start, int End)
{
    if(start<End)
    {
        int Pindex=Partition(A,start,End);
        QuickSort(A,start,Pindex-1);
        QuickSort(A,Pindex+1,End);
    }
}

int main()
{
int A[]={2,5,31,22,9,74,11};
    QuickSort(A,0,6);
    for(int x:A) cout<<x<<endl;
}

