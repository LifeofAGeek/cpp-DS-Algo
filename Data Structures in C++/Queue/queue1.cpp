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
        return (rear == front) ? true : false;
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
        Q[++rear] = x;
    }
}

int Queue::dequeue()
{
    int x = -1;
    if (isEmpty())
        printf("Queue is Empty\n");
    else
    {
        x = Q[(front++) + 1];
    }
    return x;
}

void Queue::display()
{
    for (int i = front + 1; i <= rear; i++)
        printf("%d ", Q[i]);
    printf("\n");
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