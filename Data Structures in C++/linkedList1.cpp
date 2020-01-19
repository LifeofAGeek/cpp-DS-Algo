#include<iostream>
#include<cstdlib>
using namespace std;

struct Node
{
    int data;
    Node *link;
};
struct Node *head; //global variable, can be accessed anywhere
int Insert(int x);
void Print();
int main()
{
    head=nullptr;
    cout<<"all good";
}
