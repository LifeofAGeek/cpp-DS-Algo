#include<bits/stdc++.h>
using namespace std;

int BubbleSort(int A[],int n){
for(int j=0;j<=n;j++){
    for(int i=0;i<n-2;i++){
        if(A[i]<A[i+1]){
            int temp=A[i];
            A[i]=A[i+1];
            A[i+1]=temp;
        }
    }
}
}

int main()
{
    int A[10]={2,5,31,22,9,74,91,11,32,7};
    int n=sizeof(A)/sizeof(A[0]);
    BubbleSort(A,n);
    for(int i=0;i<n;i++)
        cout<<A[i]<<endl;
}
