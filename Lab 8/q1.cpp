//#include <iostream>
//using namespace std;
//
//template<typename T>
//class Node {
//public:
//    T data;
//    Node<T>* next;
//    Node<T>* prev;
//    Node() {
//        next = nullptr;
//        prev = nullptr;
//    }
//};
//
//template<typename T>
//class LinkedList {
//public:
//    template <typename T>
//    class Iterator {
//    public:
//        Node<T>* p;
//        Iterator() {
//            p = nullptr;
//        }
//        Iterator(Node<T>* t) {
//            p = t;
//        }
//        Iterator(const Iterator<T>& i) {
//            this->p = i.p;
//        }
//        Iterator& operator++() {
//            p = p->next;
//            return *this;
//        }
//        Iterator& operator--() {
//            p = p->prev;
//            return *this;
//        }
//        T operator*() {
//            return p->data;
//        }
//        T operator[](int index) {
//            for (int i = 0; i < index; ++i) {
//                p = p->next;
//            }
//            return p->data;
//        }
//        bool operator==(const Iterator<T>& i) {
//            return this->p == i.p;
//        }
//        bool operator!=(const Iterator<T>& i) {
//            return this->p != i.p;
//        }
//    };
//
//    Node<T>* head;
//    Node<T>* tail;
//    int size = 0;
//    LinkedList() {
//        head = nullptr;
//        tail = nullptr;
//    }
//
//    Iterator<T> Begin() {
//        return Iterator<T>(head);
//    }
//
//    Iterator<T> Rbegin() {
//        return Iterator<T>(tail);
//    }
//
//    Iterator<T> End() {
//        return Iterator<T>(nullptr);
//    }
//
//    void insert(T val) {
//        Node<T>* newnode = new Node<T>;
//        newnode->data = val;
//        newnode->next = nullptr;
//        newnode->prev = nullptr;
//        if (head == nullptr)
//            head = tail = newnode;
//        else {
//            tail->next = newnode;
//            newnode->prev = tail;
//            tail = newnode;
//        }
//        ++size;
//    }
//
//    void remove(T val) {
//        Node<T>* current = head;
//        while (current != nullptr) {
//            if (current->data == val) {
//                if (current == head) {
//                    head = current->next;
//                    if (head != nullptr) {
//                        head->prev = nullptr;
//                    }
//                }
//                if (current == tail) {
//                    tail = current->prev;
//                    if (tail != nullptr) {
//                        tail->next = nullptr;
//                    }
//                }
//                if (current->prev != nullptr) {
//                    current->prev->next = current->next;
//                }
//                if (current->next != nullptr) {
//                    current->next->prev = current->prev;
//                }
//                delete current;
//                return;
//            }
//            current = current->next;
//        }
//    }
//};
//
//int main() {
//    LinkedList<int> L;
//    L.insert(10);
//    L.insert(20);
//    L.insert(30);
//    L.insert(40);
//    L.insert(50);
//
//    for (LinkedList<int>::Iterator<int>i = L.Begin(); i != L.End(); ++i) {
//        cout << *i << " ";
//    }
//    cout << endl;
//    L.insert(60);
//
//    for (LinkedList<int>::Iterator<int>i = L.Begin(); i != L.End(); ++i) {
//        cout << *i << " ";
//    }
//    cout << endl;
//
//    L.remove(30);
//
//    for (LinkedList<int>::Iterator<int>i = L.Begin(); i != L.End(); ++i) {
//        cout << *i << " ";
//    }
//
//    return 0;
//}
