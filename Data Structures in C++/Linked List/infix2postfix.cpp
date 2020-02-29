#include<bits/stdc++.h>
using namespace std;

struct Node
{
    char data;
    Node *next;
};
Node* top=nullptr;

void push(char x)
{
    Node *t=new Node;
    if(t!=nullptr)
    {
    t->data=x;
    t->next=top;
    top=t;}
}

char pop()
{
char x;
if(top!=nullptr){
    x=top->data;
    Node *t=top;
    top=top->next;
    delete(t);
    }
    return x;
}

void display(char* exp)
{
    int i=-1;
    while(exp[i++]!=0)
    {
        cout<<exp[i]<<" ";
    }
}

int isOperand(char c)
{
    if(c=='+' || c=='-' || c=='*' || c=='/')
        return 0;
    else
        return 1;
}

int precedence(char x)
{
    if(x=='+' || x=='-')
        return 1;
    else if(x=='*' || x=='/')
        return 2;
return 0;
}

char* infix2post(char* infix)
{
    int i=0,j=0;
    char* postfix;
    int len=strlen(infix);
    postfix=new char[len+2];
    while(infix[i]!='\0')
    {
        if(isOperand(infix[i]))
            postfix[j++]=infix[i++];
        else
        {
            if(precedence(infix[i])>precedence(top->data)){
                push(infix[i++]);
            }
            else{
                postfix[j++]=pop();
            }
        }
    }
    while(top->next!=nullptr)
    {
        postfix[j++]=pop();
    }
    postfix[j]='\0';
    return postfix;
}

int main()
{
    char* infix="a+b*c-d/e";
    push('#');
    char* postfix=infix2post(infix);
    display(postfix);
    return 0;
}
