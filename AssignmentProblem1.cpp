//Singly Linked List -> SLL
#include <iostream>
using namespace std;

template<class T>
class Node {
public:
    T value;
    Node<T> *next;

    Node();

    explicit Node(T val);
};

template<class T>
Node<T>::Node() {
    next = nullptr;
}

template<class T>
Node<T>::Node(T val) {
    value = val;
    next = nullptr;
}


template<class E>
class LinkedList {

private:
    Node<E> *head;
    int s;

public:

    LinkedList();

    void add(E e);

    void add(int index, E e);

    void addFirst(E e);

    void addLast(E e);

    void remove(E e);

    void removeFirst();

    void removeLast();

    int size();

    void Search_Swap(E e);

    void reverse();

    void print();
};

template<class E>
LinkedList<E>::LinkedList() {
    head = nullptr;
    s = 0;
}

template<class E>
void LinkedList<E>::addFirst(E e) {
    auto *newNode = new Node<E>(e);
    if (head == nullptr) {
        head = newNode;
    }
    else {
        newNode->next = head;
        head = newNode;
    }

    s++;
}

template<class E>
void LinkedList<E>::add(E e) {

    auto *newNode = new Node<E>(e);
    if (head == nullptr) {
        head = newNode;
        s++;
        return;
    }

    Node<E> *current = head;
    Node<E> *tmp;

    do {
        tmp = current;
        current = current->next;
    } while (current != nullptr);


    tmp->next = newNode;

    s++;
}

template<class E>
void LinkedList<E>::remove(E e) {

    Node<E> *current = head;
    Node<E> *prev = nullptr;
    bool found = false;

    if (current == nullptr) {
        cerr << "Err: can't perform remove() on an empty list" << endl;
        return;
    }

    do {
        if (current->value == e) {
            found = true;
            break;
        }

        prev = current;
        current = current->next;
    } while (current != nullptr);

    if (!found) {
        cerr << "Err: no element found with value " << e << endl;
        return;
    }

    // if the first element
    if (current == head) {
        prev = head;
        head = current->next;
        delete prev;
        return;
    }

    // if the last element
    if (current->next == nullptr) {
        prev->next = nullptr;
        delete current;
        return;
    }

    prev->next = current->next;
    delete current;

    s--;
}

template<class E>
void LinkedList<E>::removeFirst() {
    Node<E> *tmp = head;

    if (tmp == nullptr) {
        cerr << "Err: can't perform removeFirst() on an empty list" << endl;
        return;
    }

    head = tmp->next;
    delete tmp;

    s--;
}

template<class E>
void LinkedList<E>::removeLast() {
    Node<E> *current = head;
    Node<E> *prev = nullptr;

    if (current == nullptr) {
        cerr << "Err: can't perform removeLast() on an empty list" << endl;
        return;
    }

    do {
        prev = current;
        current = current->next;
    } while (current->next != nullptr);


    if (current->next == nullptr) {
        prev->next = nullptr;
        delete current;
        s--;
        return;
    }

}

template<class E>
void LinkedList<E>::reverse() {

    Node<E> *current = head;
    Node<E> *newNext = nullptr;
    Node<E> *tmp;

    if (current == nullptr) {
        cerr << "Err: can't perform reverse() on an empty list" << endl;
        return;
    }

    do {
        tmp = current->next;
        current->next = newNext;
        newNext = current;
        current = tmp;
    } while (current != nullptr);

    head = newNext;
}

template<class E>
int LinkedList<E>::size() {
    return s;
}

template<class E>
void LinkedList<E>::addLast(E e) {
    add(e);
}

template<class E>
void LinkedList<E>::add(int index, E e) {

    if (index < 0 || index > s) {
        char buff[32];
        snprintf(buff, sizeof(buff), "Index: %d, Size: %d", index, s);
        throw std::out_of_range(buff);
    }

    if (index == 0) {
        addFirst(e);
        return;
    }

    if (index == s) {
        addLast(e);
        return;
    }

    Node<E> *current = head;
    auto *newNode = new Node<E>(e);

    int i = 0;
    do {
        if (i++ == index) {
            break;
        }
        current = current->next;
    } while (current != nullptr);

    newNode->next = current->next;
    current->next = newNode;

    s++;

}

template<class E>
void LinkedList<E>::Search_Swap(E e) {
    Node<E> *current = head,*prev=nullptr;
    E temp;

    while (current!=0) {
        if (current->value == e) {
            temp=prev->value;
            prev->value=current->value;
            current->value=temp;
        }
        else{
        prev=current;
        current = current->next;
        }
    }
}
template<class E>
void LinkedList<E>::print() {

    Node<E> *current = head;

    cout << "Size: " << s << " -> [ ";
    while (current != nullptr) {
        cout << current->value << " ";
        current = current->next;
    }
    cout << "] " << endl;
}

int main() {
    LinkedList<int> SLL{};


    SLL.add(20);
    SLL.add(10);
    SLL.add(50);
    SLL.add(40);
    SLL.add(70);
    SLL.add(60);
    SLL.add(80);

    SLL.addFirst(15);

    SLL.add(90);
    SLL.add(2, 110);
    SLL.add(5, 30);

    SLL.addLast(100);

    SLL.print();

    cout << endl << "LinkedList->remove(60)" << endl;
    SLL.remove(60);
    SLL.print();

    cout << endl << "LinkedList->reverse" << endl;
    SLL.reverse();
    SLL.print();

    cout << endl << "LinkedList->removeFirst" << endl;
    SLL.removeFirst();
    SLL.print();

    cout << endl << "LinkedList->removeLast" << endl;
    SLL.removeLast();
    SLL.print();

    int value=50;
    cout << endl << "LinkedList->Search for Node value "<<value<<" and Swap with it's previous node" << endl;
    SLL.Search_Swap(value);
    cout<<endl;
    SLL.print();

    return 0;
}
