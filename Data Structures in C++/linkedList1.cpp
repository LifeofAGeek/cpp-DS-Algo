#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *link;
};

int main()
{
    Node *head=nullptr;
    Node *temp = new Node;
    temp->data=2;
    temp->link=nullptr;
    head=temp;

    cout<<"done";
}
