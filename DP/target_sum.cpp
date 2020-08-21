#include <bits/stdc++.h>
using namespace std;
#define int long long
int dp[1005];

int subsetsum(vector<int> nums, int target)
{
    dp[0] = 1;
    for (int num : nums)
    {
        cout<<num<<endl;
        for (int i = target; i >= num; i--)
        {
            dp[i] = dp[i] + dp[i - num];
            for(int i=0;i<nums.size();i++) cout<<dp[i]<<" ";
            cout<<endl;
        }
    }

    return dp[target];
}

int findTargetSumWays(vector<int> &nums, int S)
{
    int sum = accumulate(nums.begin(), nums.end(), 0);

    if (sum < S || ((sum + S) & 1) == 1)
    {
        return 0;
    }
    else
    {
        return subsetsum(nums, (sum + S) >> 1);
    }
}

void solve(){
    //code goes here
    int n,diff,arrsum=0;
    cin>>n>>diff;
    vector<int> arr(n);
    for(auto &a:arr) cin>>a, arrsum+=a;
    int ans=findTargetSumWays(arr,diff);
    //cout<<ans<<endl;
}

int32_t main()
{
    int t=1;
    while (t--)
    {
        solve();
    }
    return 0;
}