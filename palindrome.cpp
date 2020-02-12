#include<bits/stdc++.h>
using namespace std;

int main()
{
    char text[]="Adda";
    int flag=1;
    int n=sizeof(text)/sizeof(text[0]);
    for(int i=0;i<(n/2);i++)
    {
        if(text[i]!=text[n-i-1]){
            flag=0;
            break;
        }
    }
    cout<<(flag==0?"Not a Palindrome":"palindrome");
}
