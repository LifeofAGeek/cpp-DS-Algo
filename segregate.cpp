//sort an array of three types of element 0's, 1's and 2's with linear time and const extra space

#include <iostream>
using namespace std;

void Segregate(int arr[], int n){
    int low = 0, mid = 0, high = n-1;
    while(mid<=high){
        switch (arr[mid]){
            case 0: swap(arr[low], arr[mid]);
                    low++;mid++;
                    break;
            case 1: mid++;
                    break;
            case 2: swap(arr[mid],arr[high]);
                    high--; mid++;
                    break;
        }
    }
}

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Segregate(arr,n);
        for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    }
}