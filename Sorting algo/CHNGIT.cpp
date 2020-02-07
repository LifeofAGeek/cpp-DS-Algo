#include<bits/stdc++.h>
using namespace std;

int CHNGIT(int arr[], int n)
{
     unordered_map<int, int> dict;
     for(int i=0;i<n;i++)
        dict[arr[i]]++;
     int max_count=0;
     for(auto i:dict)
     {
         if(max_count<i.second){
                max_count=i.second;
         }
     }
     return(n-max_count);
}

int main()
{
    int A[]={10, 20, 10, 20, 30, 20, 20};
    int n=sizeof(A)/sizeof(A[0]);
    cout<<"No. of moves required is:"<<CHNGIT(A,n);
}
