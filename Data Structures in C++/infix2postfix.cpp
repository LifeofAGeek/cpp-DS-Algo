#include<bits/stdc++.h>
using namespace std;

struct Node
{
    char data;
    Node *next;
}top=nullptr;

int isOperand(char c)
{
    if(c=="+" || c=="-" || c=="*" || c=="/")
        return 0;
    else
        return 1;
}

int precedence(char ch)
{

}
