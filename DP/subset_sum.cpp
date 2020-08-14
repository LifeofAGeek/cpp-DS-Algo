#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,sum;
    cin>>n>>sum;
    int arr[n];
    for(auto &a:arr) cin>>a;
    bool dp[n+1][sum+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=sum;j++){
            if(i==0) dp[i][j]=0;
            if(j==0) dp[i][j]=1;
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=sum;j++){
            if(arr[i-1]<=j){
                dp[i][j]= (dp[i-1][j-arr[i-1]]) or (dp[i-1][j]);
            }
            else {
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    if(dp[n][sum]) cout<<"YES\n";
    else cout<<"NO\n";
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