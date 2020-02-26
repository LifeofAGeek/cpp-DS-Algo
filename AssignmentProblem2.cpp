//Doubly Linked List -> DLL
#include <iostream>
using namespace std;

template<class T>
class Node {
public:
    T value;
    Node<T> *next,*prev;

    Node();

    explicit Node(T val);
};

template<class T>
Node<T>::Node() {
    next = prev = nullptr;
}

template<class T>
Node<T>::Node(T val) {
    value = val;
    next = prev = nullptr;
}


template<class E>
class D_LinkedList {

//private:
    Node<E> *first;
    int s;

public:

    D_LinkedList();

    void insert_node(int index, E val);

    void addFirst(E val);

    void add(E val);

    void delete_node(E val);

    int size();

    void reverse();

    void print();
};

template<class E>
D_LinkedList<E>::D_LinkedList() {
    first = nullptr;
    s = 0;
}

template<class E>
void D_LinkedList<E>::addFirst(E val) {
    auto *t = new Node<E>(val);
    if (first == nullptr) {
        first = t;
    }
    else {
        first->prev=t;
        t->next=first;
        t->prev=nullptr;
        first=t;
    }

    s++;
}

template<class E>
void D_LinkedList<E>::add(E val) {

    auto *t = new Node<E>(val);
    Node<E> *p=first;
    if (first == nullptr) {
        first = t;
        s++;
        return;
    }
    while(p->next!=0){
        p=p->next;
    }
    t->prev=p;
    t->next=nullptr;
    p->next=t;

    s++;
}

template<class E>
void D_LinkedList<E>::delete_node(E index) {

    Node<E> *p=first;
    if(index==1)
    {
        first=first->next;
        delete(p);
        if(first) first->prev=nullptr;
    }
    else{
        for(int i=1;i<index;i++)
            p=p->next;
        p->prev->next=p->next;
        if(p->next) p->next->prev=p->prev;
        delete(p);
    }
    s--;
}
template<class E>
void D_LinkedList<E>::reverse() {

    Node<E> *temp=nullptr,*p=first;
    while(p!=0)
    {
        temp=p->next;
        p->next=p->prev;
        p->prev=temp;
        p=p->prev;
        if(p!=0 && p->next==0)
            first=p;
    }
}

template<class E>
int D_LinkedList<E>::size() {
    return s;
}

template<class E>
void D_LinkedList<E>::insert_node(int index, E val) {

    auto *t = new Node<E>(val);
    Node<E> *p=first;
    if (index < 0 || index > s) {
        char buff[32];
        snprintf(buff, sizeof(buff), "Index: %d, Size: %d", index, s);
        throw std::out_of_range(buff);
    }

    if (index == 1) {
        addFirst(val);
        return;
    }

    if (index == s) {
        add(val);
        return;
    }

    for(int i=1;i<index-1;i++)
            p=p->next;
        t->prev=p;
        t->next=p->next;
        p->next->prev=t;
        p->next=t;

    s++;

}

template<class E>
void D_LinkedList<E>::print() {

    Node<E> *current = first;

    cout << "Size: " << s << " -> [ ";
    while (current != nullptr) {
        cout << current->value << " ";
        current = current->next;
    }
    cout << "] " << endl;
}

int main() {
    D_LinkedList<int> DLL{};

    DLL.add(20);
    DLL.add(10);
    DLL.add(50);
    DLL.add(40);
    DLL.add(70);
    DLL.add(60);
    DLL.add(80);
    DLL.addFirst(15);
    DLL.addFirst(25);
    DLL.add(90);
    DLL.insert_node(3, 110);
    DLL.add(100);
    DLL.insert_node(2, 30);
    cout<<"Doubly LinkedList after insertion of nodes"<<endl;
    DLL.print();

    int index=2;
    cout << endl << "Doubly LinkedList <--> delete node at index: "<<index<< endl;
    DLL.delete_node(index);
    DLL.print();

    cout << endl << "doubly LinkedList <--> reverse" << endl;
    DLL.reverse();
    DLL.print();

    return 0;
}

