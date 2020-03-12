#include <bits/stdc++.h>
using namespace std;

class Queue
{
public:
    int size;
    int front;
    int rear;
    int *Q;
    bool isEmpty()
    {
        return (rear == front) ? true : false;
    }
    bool isFull()
    {
        return ((rear+1)%size == front )? true : false;
    }

public:
    Queue(int size)
    {
        this->size = size;
        Q = new int[size];
        front = rear = -1;
    }

    void enqueue(int x);
    int dequeue();
    void display();
};

void Queue::enqueue(int x)
{
    if (isFull())
        
        cout << "Queue is Full";
    else
    {
        Q[rear] = x;
        rear=(rear+1)%(size);
    }
}

int Queue::dequeue()
{
    int x = -1;
    if (isEmpty())
        printf("Queue is Empty\n");
    else
    {
        x = Q[front];
        front=(front+1)%size;
    }
    return x;
}

void Queue::display()
{
    int i=front;
    do
    {
        cout<<Q[i]<<" ";
        i=(i+1)%size;
    } while (i!=(rear)%size);
    
}

int main()
{
    Queue q(5);

    q.enqueue(0);
    q.enqueue(1);
    q.enqueue(9);
    q.enqueue(9);
    q.enqueue(7);
    //cout<<q.rear<<" "<<q.front;
    //q.display();
    cout<<endl;
    q.dequeue();
//cout<<q.rear<<" "<<q.front;
    q.display();


}