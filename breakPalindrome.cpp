#include<bits/stdc++.h>
#include<string>
using namespace std;

class Solution
{
public:
    string breakPalindrome(string s)
    {
        int n=s.length();
        if(n==1){return " ";}
        for(int i=0;i<n/2;i++){
            if(s[i]!='a'){
                s[i]='a';
                return s;
            }
        }
        s[n-1]='b';
        return s;
    }
};

int main(){
Solution answer;
cout<<answer.breakPalindrome("abba")<<endl;
cout<<answer.breakPalindrome("aaaa");
}
