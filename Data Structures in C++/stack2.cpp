#include<bits/stdc++.h>
using namespace std;

struct Node{
int val;
Node *next;
};
Node *top=nullptr;

void push(int x)
{
    Node *t=new Node;
    if(t!=nullptr)
    {
    t->val=x;
    t->next=top;
    top=t;}
}

void pop()
{
    Node *t=top;
    int x;
    x=t->val;
    top=top->next;
    delete(t);
}

void display(Node *p=top)
{
    if(p!=0)
    {
        cout<<p->val<<endl;
        display(p->next);
    }
}

int main()
{
    push(1);
    push(2);
    push(3);
    pop();
    display();
}
