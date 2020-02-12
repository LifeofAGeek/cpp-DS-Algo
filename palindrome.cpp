#include<bits/stdc++.h>
using namespace std;

void PalindromeCheck(char str[])
{
    int l = 0;
    int h = strlen(str) - 1;
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            cout<<"Not a palindrome";
            return;
        }
    }
    cout<<"Palindrome";
}

int main()
{
    char text[]="";
    int flag=1;
    int n=sizeof(text)/sizeof(text[0])-1;
    for(int i=0;i<(n/2);i++)
    {
        if(text[i]!=text[n-i]){
            flag=0;
            break;
        }
    }
    cout<<(flag==0?"Not a Palindrome":"palindrome");
    PalindromeCheck(text);

}
