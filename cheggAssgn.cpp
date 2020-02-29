#include <iostream>

#include <vector>

#include <string>

using namespace std;

string addbin(string, string);

string addhex(string, string);

string multbin(string, string);

string multhex(string, string);

int main()

{

cout<<"binary 10001 * 11 = "<<multbin("10001", "11")<<endl; //you should get 110011

cout<<"binary 100 * 110001 = "<<multbin("100", "11001")<<endl; //you should get 1100100

cout<<"binary 110 * 1010 = "<<multbin("110", "1010")<<endl; //you should get 111100

cout<<"binary 11111111 * 10 = "<<multbin("11111111", "10")<<endl; //you should get 111111110

cout<<"binary 10101010 * 1 = "<<multbin("10101010", "1")<<endl; //you should get 10101010

cout<<"binary 0 * 11110000 = "<<multbin("0", "11110000")<<endl<<endl; //you should get 0

cout<<"hexadecimal F * A = "<<multhex("F", "A")<<endl; //you should get 96

cout<<"hexadecimal 1A * 5 = "<<multhex("1A", "5")<<endl; //you should get 82

cout<<"hexadecimal FF * 2 = "<<multhex("FF", "2")<<endl; //you should get 1FE

cout<<"hexadecimal 104 * 3 = "<<multhex("104", "3")<<endl; //you should get 30C

cout<<"hexadecimal FABC * 1 = "<<multhex("FABC", "1")<<endl; //you should get FABC

cout<<"hexadecimal 0 * EFDCAB = "<<multhex("0", "EFDCAB")<<endl<<endl; //you should get 0

system("PAUSE");

return 0;

}

string addbin(string bin1, string bin2)

{
    string result = ""; // Initialize result
    int s= 0;          // Initialize digit sum

    // Traverse both strings from starting index 0
    int i = bin1.size() - 1, j = bin2.size() - 1; //last character is null '\0'
    while (i >= 0 || j >= 0 || s == 1)
    {
        // Compute the sum of last digits and carry
        s += ((i >= 0)? bin1[i] - '0': 0);
        s += ((j >= 0)? bin2[j] - '0': 0);

        // If current digit sum is 1 or 3, add 1 to result
        result = char(s % 2 + '0') + result;

        // Compute carry
        s /= 2;

        // Move to next digits
        i--; j--;
    }
    return result;
}

string addhex(string hex1, string hex2)

{
int ihex1 = stoi(hex1,nullptr,16); //converts hex to decimal
int ihex2 = stoi(hex2,nullptr,16);
char str[8];
itoa(ihex2+ihex1,str,16); //converts integer to char
string ans(str); //char to string
return ans;
}

string multbin(string bin1, string bin2)

{
    int b1 = stoi(bin1,nullptr,2);
    int b2 = stoi(bin2,nullptr,2);
    int mul=0;
    for(int i=1;i<=min(b1,b2);i++){
        mul+=max(b1,b2);
    }
    char str[32];
    itoa(mul,str,2);
    string ans(str);
    return ans;
}

string multhex(string hex1, string hex2)

{
    int h1 = stoi(hex1,nullptr,16);
    int h2 = stoi(hex2,nullptr,16);
    int mul=0;
    for(int i=1;i<=min(h1,h2);i++){
        mul+=max(h1,h2);
    }
    char str[8];
    itoa(mul,str,16);
    string ans(str);
    return ans;
}

