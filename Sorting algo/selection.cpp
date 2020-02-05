#include<bits/stdc++.h>
using namespace std;

void selectionSort(int A[],int n)
{
    for(int i=0;i<n-1;i++){
        int imin=i;
        for(int j=i+1;j<n;j++){
            if(A[j]<A[imin]){
                imin=j;
            }
        }
        int temp= A[i];
        A[i]=A[imin];
        A[imin]=temp;
        }

    }
int main()
{
    int A[10]={2,5,31,22,9,74,91,11,32,7};
    int n=sizeof(A)/sizeof(A[0]);
    selectionSort(A,n);
    for(int i=0;i<n;i++)
        cout<<A[i]<<endl;
}
