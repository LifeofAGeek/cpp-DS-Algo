#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    TreeNode *lchild;
    TreeNode *rchild;
    int data;
};
TreeNode *root;

class Queue
{
private:
    int size;
    int front;
    int rear;
    struct TreeNode **Q;

public:
    bool isEmpty()
    {
        return (rear == front) ? true : false;
    }
    bool isFull()
    {
        return (rear == size - 1) ? true : false;
    }

    Queue(int size)
    {
        this->size = size;
        Q = new TreeNode *[size];
        front = rear = -1;
    }

    void enqueue(TreeNode *x);
    TreeNode *dequeue();
};
Queue q(100);