#include <bits/stdc++.h>
using namespace std;

class Queue
{
private:
    int size;
    int front;
    int rear;
    int *Q;
    bool isEmpty()
    {
        return ((rear+1)%size == front) ? true : false;
    }
    bool isFull()
    {
        return (rear == size - 1) ? true : false;
    }

public:
    Queue(int size)
    {
        this->size = size;
        Q = new int[size];
        front = rear = 0;
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
        rear=(rear+1)%size;
        Q[rear] = x;
    }
}

int Queue::dequeue()
{
    int x = -1;
    if (isEmpty())
        printf("Queue is Empty\n");
    else
    {
        x = Q[front++ + 1];
    }
    return x;
}

void Queue::display()
{
    int i=front+1;
    do
    {
        cout<<Q[i]<<" ";
        i=(i+1)%size;
    } while (i!=(rear+1)%size);
    
}

int main()
{
    Queue q(5);

    q.enqueue(0);
    q.enqueue(1);
    q.enqueue(9);
    q.enqueue(9);
    q.enqueue(7);

    q.dequeue();

    q.display();
}