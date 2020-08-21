#include<bits/stdc++.h>
using namespace std;
#define int long long
int dp[1001][1001];

int helper(int weight[], int value[], int W, int n){
    if(n==0 or W==0) return 0;

    if(dp[n][W]!=-1) return dp[n][W];

    if(weight[n-1]<=W){
        int take = value[n-1] + helper(weight,value,W-weight[n-1],n);
        int ntake= helper(weight,value,W,n-1);
        int ans=max(take,ntake);
        dp[n][W]=ans;
        return ans;
    }
    else{
        return helper(weight,value,W,n-1);;
    }
}

void solve(){
    int W,n;
    cin>>n>>W;
    int weight[n], value[n];
    for(auto &a:weight) cin>>a;
    for(auto &a:value) cin>>a;
    memset(dp,-1,sizeof(dp));
    int ans=helper(weight,value,W,n);
    cout<<ans<<endl;
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
