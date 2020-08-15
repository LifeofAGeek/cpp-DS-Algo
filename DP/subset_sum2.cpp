#include<bits/stdc++.h>
using namespace std;
#define int long long
int dp[1001][1001];

int helper(int arr[], int sum, int n){
    if(n==0 and sum!=0) return 0;
    if(sum==0) return 1;

    if(dp[n][sum]!=-1) return dp[n][sum];

    if(arr[n-1]<=sum){
        int take = helper(arr,sum-arr[n-1],n-1);
        int ntake = helper(arr,sum,n-1);
        bool ans= take || ntake;
        dp[n][sum]=ans;
        return ans;
    }
    else{
        return helper(arr,sum,n-1);
    }
}

void solve(){
    int n,sum;
    cin>>n>>sum;
    int arr[n];
    for(auto &a:arr) cin>>a;
    memset(dp,-1,sizeof(dp));
    bool ans=helper(arr,sum,n);
    cout<<ans<<endl;
}


int32_t main()
{
    int t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
