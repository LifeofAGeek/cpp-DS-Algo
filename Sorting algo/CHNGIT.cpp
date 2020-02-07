#include<bits/stdc++.h>
using namespace std;

int main()
{
    int testCase; //test case input
    cin>>testCase;
    while(testCase--)
    {
        int n; //size of integer array
        int arr[n]; //sequence of integers
        int freq[101]={0}; //frequency of each element
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            freq[arr[i]]++;
        }
    int c=0;
    sort(freq,freq+101);
    cout<<n-freq[100]<<endl;
}
}
