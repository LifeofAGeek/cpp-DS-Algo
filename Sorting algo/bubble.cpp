#include<bits/stdc++.h>
using namespace std;

int BubbleSort(int A[],int n,int c=0)
{
int flag;
for(int j=1;j<=n;j++){
    flag=0;
    c=c+1;
    for(int i=0;i<n-1;i++){
        if(A[i]<A[i+1]){
            int temp=A[i];
            A[i]=A[i+1];
            A[i+1]=temp;
            flag=1;

        }
    }
    if(flag==0){
            cout<<"Number of pass is "<<c<<" out of "<<n<<endl;
            return 0;}
}
}

int main()
{
    int A[]={2,5,31,22,9,74,11,32,7,87,65,40,44,86,91,63};
    int n=sizeof(A)/sizeof(A[0]);
    BubbleSort(A,n);
    for(int i=0;i<n;i++)
        cout<<A[i]<<endl;
}
