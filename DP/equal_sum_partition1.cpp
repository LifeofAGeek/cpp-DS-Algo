#include<bits/stdc++.h>
using namespace std;
#define int long long
int dp[1001][1001];

bool helper(int arr[], int sum, int n){
    if(sum==0) return 1;
    if(n==0 and sum!=0) return 0;
    if(dp[n][sum]!=-1) return dp[n][sum];
    if(arr[n-1]<=sum){
        bool ans = helper(arr,sum-arr[n-1],n-1) or helper(arr,sum,n-1);
        dp[n][sum]=ans;
        return ans;
    }
    else return helper(arr,sum,n-1);
}

void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(auto &a:arr) cin>>a;
    memset(dp,-1,sizeof(dp));
    int sum=0;
    for(auto a:arr) sum+=a;
    if(sum&1) cout<<"NO\n";
    else{
        bool ans=helper(arr,sum/2,n);
        cout<<(ans==1?"YES":"NO")<<endl;
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