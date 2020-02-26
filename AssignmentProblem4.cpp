#include <iostream>
using namespace std;
void reverse_string(string &s, int len, int i = 0)
{
    if (i >= len / 2)
    {
        return;
    }
    char temp = s[i];
    s[i] = s[len - i - 1];
    s[len - i - 1] = temp;
    reverse_string(s, len, i + 1);
}
int main()
{
    string s;
    int len;
    cout << "Enter the string: ";
    cin>>s;
    len = s.size();
    reverse_string(s, len);
    cout<<s<<endl;
    return 0;
}
