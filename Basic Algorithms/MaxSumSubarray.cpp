#include<bits/stdc++.h>
using namespace std;

int bruteForce_n_cube(int arr[], int n)
{
    int max_sum=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=arr[k];
            }
        if(sum>max_sum)
            max_sum=sum;
        }
    }
    return max_sum;
}

int bruteForce_n_square(int arr[], int n)
{
    int max_sum=INT_MIN, sum;
    for(int i=0;i<n;i++){ sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(sum>max_sum)
                max_sum=sum;
        }
    }
    return max_sum;
}

int Divide_and_conquer_n_logn(int arr[], int n)
{
    if(n==1) return arr[0];
    int m=n/2;
    int left_MSS=bruteForce_n_logn(arr,m);
    int right_MSS=bruteForce_n_logn(arr+m,n-m);
    int left_sum=INT_MIN,right_sum=INT_MIN,sum=0;
    for(int i=m;i<n;i++)
        sum+=arr[i];
        right_sum=max(right_sum,sum);
    sum=0;
    for(int i=(m-1);i>=0;i--)
        sum+=arr[i];
        left_sum=max(left_sum,sum);
    int max_sum=max(left_MSS,right_MSS);
    return max(max_sum,left_sum+right_sum);
}

int main()
{
    int a[]={3,-2,5,-1};
    int n=(sizeof(a))/sizeof(a[0]);
    cout<<"Max Sum Subarray is= "<<bruteForce_n_logn(a,n);
}
