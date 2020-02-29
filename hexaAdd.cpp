#include<bits/stdc++.h>
using namespace std;
int main(){

string hex1 = "5A72";
string hex2 = "4573";
string res;

bool hasCarry = false;
for(int n=3;n>=0;n--){
        cout<<hex1[n]<<" "<<hex2[n]<<endl;
 string hexValues = "0123456789ABCDEF";
 char addedValue = ((int)hex1[n] + (int)hex2[n]);
cout<<addedValue<<endl;
 if(hasCarry){
   ++addedValue;
   hasCarry = false;
 }
 if(addedValue > 16) {
    hasCarry = true;
    addedValue %= 16; //map 0-15
 }
 res.push_back(hexValues[addedValue-1]);
}
cout<<res;
}
