#include<bits/stdc++.h>
using namespace std;

struct Stack
{
    int Size;
    int top;
    int *s;
};

int main()
{
    struct Stack st;
    cin>>st.Size;
    st.s=new int[st.Size];
    st.top=-1;
    cout<<st.top<<" "<<st.Size;
}
