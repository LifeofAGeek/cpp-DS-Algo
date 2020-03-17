#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x) : data(x), next(nullptr) {}
};

class Queue
{
private:
    Node *front, *rear;
    int size;

public:
    Queue()
    {
        size=0;
        front=rear=nullptr;
    }

    bool isEmpty()
    {
        return (front==nullptr?true:false);
    }

    void enqueue(int x);
    int dequeue();
    void display();
};

void Queue::enqueue(int x)
{
    Node *temp=new Node(x);
    if(temp==nullptr) cout<<"Queue is Full"<<endl;
    else
    {
        if(front==nullptr)
        {
            front=rear=temp;
        }
        else
        {
            rear->next=temp;
            rear=temp;
        }
    }
    size++;
}

int Queue::dequeue()
{
    int x=-1;
    Node *t;
    if(!isEmpty())
    {
        t=front;
        x=t->data;
        front=front->next;
        delete(t);
        size--;
    }
    else
    {
        cout<<"Queue is Empty"<<endl;
    }
    return x;
}

void Queue::display()
{
    Node *p=front;
    while (p)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
}

int main()
{
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.dequeue();
    q.display();
}