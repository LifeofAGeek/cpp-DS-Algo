#include<bits/stdc++.h>
using namespace std;

int bruteForce(int arr[], int n)
{
    int max_sum=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=arr[i];
            }
        if(sum>max_sum)
            max_sum=sum;
        }
    }
    return max_sum;
}

int main()
{

}
