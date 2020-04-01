#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void Sortedinsert(Node **H, int x)
{
    Node *t, *q = nullptr, *p = *H;
    t = new Node;
    t->data = x;
    t->next = NULL;

    if (*H == NULL)
    {
        *H = t;
    }
    else
    {
        while (p && p->data < x)
        {
            q = p;
            p = p->next;
        }
        if (p == *H)
        {
            t->next = *H;
            *H = t;
        }
        else
        {
            t->next = q->next;
            q->next = t;
        }
    }
}

Node *Search(Node *p, int key)
{
    while (p != NULL)
    {
        if (key == p->data)
        {
            return p;
        }
        p = p->next;
    }
    return NULL;
}

int hashf(int key)
{
    return key % 10;
}

void Insert(struct Node *H[], int key)
{
    int index = hashf(key);
    Sortedinsert(&H[index], key);
}

int main()
{
    struct Node *HT[10];
    struct Node *temp;
    int i;
    for (i = 0; i < 10; i++)
        HT[i] = NULL;
    Insert(HT, 12);
    Insert(HT, 22);
    Insert(HT, 42);
    temp = Search(HT[hashf(22)], 22);
    printf("%d ", temp->data);
    return 0;
}