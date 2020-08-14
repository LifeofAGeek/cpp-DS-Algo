#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,w;
    cin>>n>>w;
    int weight[n], value[n];
    for(auto &a:weight) cin>>a;
    for(auto &a:value) cin>>a;
    int dp[n+1][w+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=w;j++){
            if(i==0 or j==0) dp[i][j]=0;
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=w;j++){
            if(weight[i-1]<=j){
                dp[i][j]=max(value[i-1]+dp[i-1][j-weight[i-1]],dp[i-1][j]);
            }
            else {
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    cout<<dp[n][w]<<endl;
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