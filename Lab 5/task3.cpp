//#include <iostream>
//using namespace std;
//
//class Node {
//public:
//    int data;
//    Node* next;
//    Node* prev;
//
//    Node(int val) : data(val), next(nullptr), prev(nullptr) {}
//};
//
//class DoublyLinkedList {
//public:
//    Node* head;
//    Node* tail;
//
//    DoublyLinkedList() : head(nullptr), tail(nullptr) {}
//
//    void insert(int val) {
//        Node* newNode = new Node(val);
//        if (head == nullptr) {
//            head = tail = newNode;
//        }
//        else {
//            tail->next = newNode;
//            newNode->prev = tail;
//            tail = newNode;
//        }
//    }
//
//    int countTriplets(int x) {
//        int count = 0;
//        Node* currentNode = head;
//
//        while (currentNode->next != nullptr) {
//            Node* leftPointer = currentNode->next;
//            Node* rightPointer = tail;
//
//            while (leftPointer != rightPointer) {
//                int sum = currentNode->data + leftPointer->data + rightPointer->data;
//
//                if (sum == x) {
//                    count++;
//                    leftPointer = leftPointer->next;
//                    rightPointer = rightPointer->prev;
//                }
//                else if (sum < x) {
//                    leftPointer = leftPointer->next;
//                }
//                else {
//                    rightPointer = rightPointer->prev;
//                }
//            }
//
//            currentNode = currentNode->next;
//        }
//
//        return count;
//    }
//};
//
//int main() {
//    DoublyLinkedList list;
//    cout << "Please Enter DATA in the Linked List  Press 0 to stop" << endl;
//    int ch = -1;
//    while (ch != 0)
//    {
//        int a = -2;
//        cin >> a;
//        if (a == 0)
//        {
//            ch = 0;
//            break;
//        }
//        list.insert(a);
//    }
//    cout << "Enter The value to be counted" << endl;
//    int x;
//    cin >> x;
//    int tripletsCount = list.countTriplets(x);
//
//    cout << "Number of triplets producing sum " << x << ": " << tripletsCount << endl;
//
//}
