#include<bits/stdc++.h>
using namespace std;

struct Stack
{
    int Size;
    int top;
    int *s;
};

void push(Stack *st, int val)
{
    if(st->top==(st->Size)-1)
        cout<<"Stack Overflow!!";
    else{
        st->top++;
        st->s[st->top]=val;
    }
}

void display(Stack *st)
{
    for(int i=0;i<=st->top;i++)
        cout<<st->s[i]<<" ";
}

int main()
{
    struct Stack st;
    cout<<"Enter Size of Stack"<<endl;
    cin>>st.Size;
    st.s=new int[st.Size];
    st.top=-1;
    push(&st,1);
    push(&st,2);
    display(&st);
}
