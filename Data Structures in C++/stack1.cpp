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
    cout<<"Enter Size of Stack"<<endl;
    cin>>st.Size;
    st.s=new int[st.Size];
    st.top=-1;
    if(st.top==-1) cout<<"Empty Stack!";
    if(st.top==st.Size-1) cout<<"Full Stack!";

}
