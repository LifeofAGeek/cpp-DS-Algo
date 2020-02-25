#include<bits/stdc++.h>
using namespace std;

int NcR(int n, int r)
{
    if(r==0 || n==r)
        return 1;
    else
        return NcR(n-1,r-1)+ NcR(n-1,r);
}

int main()
{
    int n;
    cout<<"Enter nth Row"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<NcR(i,j)<<" ";
        }
        cout<<endl;
    }
}
