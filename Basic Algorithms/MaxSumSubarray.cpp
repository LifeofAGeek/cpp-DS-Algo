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
int main()
{
    int a[]={1,2,3,4};
    int n=(sizeof(a))/sizeof(a[0]);
    cout<<"Max Sum Subarray is= "<<bruteForce_n_square(a,n);
}
