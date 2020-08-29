#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    //code goes here
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(auto &a:arr) cin>>a;
    
    while(k--){ // k queries
        int x;
        cin>>x;
        int l=-1; // arr[l]<x
        int r=n; //arr[r]>=x
        while(r!=l+1){
            int mid=l+(r-l)/2;
            if(arr[mid]<x) l=mid;
            else r=mid;
        }
        cout<<r+1<<endl; //1 based index, n+1 means rightmost element is closest
    }
}

int32_t main()
{
    int t=1;
    //cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}