#include<bits/stdc++.h>
using namespace std;

struct Node
{
    char data;
    Node *next;
};
Node *top=nullptr;

void push(char ch)
{
    Node *t=new Node;
    t->data=ch;
    t->next=top;
    top=t;
}

char pop()
{
    Node *t;
    t=top;
    top=top->next;
    delete(t);
}

void display()
{
    Node *p=top;
    while(p)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}

int isBalanced(char *exp)
{
    for(int i=0;i<strlen(exp);i++)
    {
        if(exp[i]=='('){
            push(exp[i]);
            continue;
        }
        if(exp[i]==')')
        {
            if(top==0)
                return 0;
            pop();
        }
    }
    if(top){return 0;}
    else{return 1;}
}
int main()
{
    char *exp="((a+b)*(c-d)))";
    cout<<isBalanced(exp);
    //cout<<(isBalanced(exp)==1?"Balanced Expression":"Not Balanced Expression");
    return 0;
}
