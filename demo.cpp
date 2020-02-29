#include <iostream>

#include <vector>

#include <string>
using namespace std;
int main(){
string hex1 = "5A72";
string hex2 = "4573";
int ihex = stoi (hex1,nullptr,16);
int ihex2 = stoi (hex2,nullptr,16);
char str[10];
itoa(ihex2+ihex,str,16);
string ans(str);
cout<<ans<<'\n';
}
