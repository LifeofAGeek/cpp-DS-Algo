#include<bits/stdc++.h>
using namespace std;

struct Node{
int val;
Node *next;
};
Node top=nullptr;

void push(int x)
{
    if(t!=nullptr){
    Node *t=new Node;
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
    return x;
}
