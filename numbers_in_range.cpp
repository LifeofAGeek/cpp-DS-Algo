#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    //code goes here
    int n,k;
    cin>>n;
    int arr[n];
    for(auto &a:arr) cin>>a;
    //sort(arr,arr+n);
    cin>>k;
    while(k--){ // k queries
        int x,y;
        int ans=0;
        cin>>x>>y;
        for(int i=0;i<n;i++){
            if(arr[i]<=y and arr[i]>=x) ans++;
        }
        cout<<ans<<" ";
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