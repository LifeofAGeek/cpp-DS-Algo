//Circular Linked List -> CLL
#include <iostream>
using namespace std;
template <class T>

class C_LinkedList
{
private:
    class Node
    {
    public:
        T data;
        Node *next;
        Node(T val)
        {
            data = val;
        }
    };
    Node *start, *end;
    int size;

public:
    C_LinkedList()
    {
        start = nullptr;
        size = 0;
    }
    T front()
    {
        if (size == 0)
        {
            return false;
        }
        return start->data;
    }
    T back()
    {
        if (size == 0)
        {
            return false;
        }
        return end->data;
    }
    void advance()
    {
        if (size == 0)
        {
            return;
        }
        start = start->next;
        end = end->next;
    }
    void add(T val, int pos = -1)
    {
        if (pos < -1 || pos > size)
        {
            return;
        }
        size++;
        Node *temp = new Node(val);
        if (start == 0)
        {
            start = end = temp;
            start->next = end;
            end->next = start;
            return;
        }
        if (pos == -1)
        {
            end->next = temp;
            end = temp;
            end->next = start;
            return;
        }
        if (pos == 0)
        {
            temp->next = start;
            start = temp;
            end->next = temp;
        }
        else
        {
            pos--;
            Node *current = start;
            while (pos > 0)
            {
                current = current->next;
                pos--;
            }
            temp->next = current->next;
            current->next = temp;
        }
    }
    T remove(int pos = -1)
    {
        if (size == 0 || pos < -1 || pos >= size)
        {
            return false;
        }
        size--;
        T temp;
        if (pos == -1)
        {
            pos = size;
        }
        if (size == 0)
        {
            temp = start->data;
            delete start;
            start = end = nullptr;
        }
        else if (pos == 0)
        {
            Node *ref = start;
            temp = start->data;
            end->next = start = start->next;
            delete ref;
        }
        else
        {
            pos--;
            Node *current = start;
            while (pos > 0)
            {
                current = current->next;
                pos--;
            }
            Node *ref = current->next;
            if (ref == end)
            {
                end = current;
            }
            temp = current->next->data;
            current->next = current->next->next;
            delete ref;
        }
        return temp;
    }
    void print()
    {
        Node *current = start;
        int count = size;
        cout << "Size: " << size << " and CLL = [ ";
        while(count--)
        {
            cout<<current->data<<" -> ";
            current = current->next;
        }
        cout << "START ]\n";
    }
};
int main()
{
    C_LinkedList<int> CLL;
    CLL.add(10);
    CLL.add(20);
    CLL.add(30);
    CLL.add(40);
    CLL.add(50);
    CLL.add(60);
    CLL.print();

    cout<<"After deleting a node"<<endl;
    CLL.remove();
    CLL.print();

    cout<<"front node is "<<CLL.front()<<endl;
    cout<<"rear node is "<<CLL.back()<<endl;

    CLL.advance();
    CLL.print();

    cout<<"front node is "<<CLL.front()<<endl;
    cout<<"rear node is "<<CLL.back()<<endl;

    return 0;
}
