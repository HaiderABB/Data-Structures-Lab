//#include <iostream>
//
//template <typename T>
//class Node {
//public:
//    T data;
//    Node* next;
//    Node* prev;
//
//    Node(T val) : data(val), next(nullptr), prev(nullptr) {}
//};
//
//template <typename T>
//class DoubleLinkedList {
//private:
//    Node<T>* head;
//    Node<T>* tail;
//
//public:
//    DoubleLinkedList() : head(nullptr), tail(nullptr) {}
//
//    void insert(T val) {
//        Node<T>* newNode = new Node<T>(val);
//        if (!head) {
//            head = newNode;
//            tail = newNode;
//        }
//        else {
//            tail->next = newNode;
//            newNode->prev = tail;
//            tail = newNode;
//        }
//    }
//
//    void print() {
//        Node<T>* current = head;
//        while (current) {
//            std::cout << current->data << " ";
//            current = current->next;
//        }
//        std::cout << std::endl;
//    }
//
//    void reverseLinkList() {
//        if (!head || !head->next) {
//            return; // List is empty or has only one element
//        }
//
//        Node<T>* current = head;
//        while (current) {
//            Node<T>* temp = current->prev;
//            current->prev = current->next;
//            current->next = temp;
//            current = current->prev;
//        }
//
//        // Swap head and tail
//        Node<T>* temp = head;
//        head = tail;
//        tail = temp;
//    }
//
//    bool isPalindrome() {
//        if (!head || !head->next) {
//            return true; // Empty list or single-element list is a palindrome
//        }
//
//        Node<T>* start = head;
//        Node<T>* end = tail;
//        while (start != end) {
//            if (start->data != end->data) {
//                return false;
//            }
//            start = start->next;
//            end = end->prev;
//        }
//        return true;
//    }
//
//    void reorderLinkList() {
//        if (!head || !head->next) {
//            return; // Empty list or single-element list
//        }
//
//        Node<T>* current = head;
//        Node<T>* mid = head;
//        while (current->next && current->next->next) {
//            current = current->next->next;
//            mid = mid->next;
//        }
//
//        Node<T>* secondHalf = mid->next;
//        mid->next = nullptr;
//
//        Node<T>* prev = nullptr;
//        Node<T>* next = nullptr;
//        current = secondHalf;
//
//        while (current) {
//            next = current->next;
//            current->next = prev;
//            current->prev = nullptr;
//            if (next) {
//                next->prev = current;
//            }
//            prev = current;
//            current = next;
//        }
//
//        current = head;
//        while (prev) {
//            Node<T>* temp1 = current->next;
//            Node<T>* temp2 = prev->next;
//            current->next = prev;
//            prev->next = temp1;
//
//            if (temp1) {
//                temp1->prev = current;
//            }
//
//            current = temp1;
//            prev = temp2;
//        }
//
//        tail = current;
//    }
//
//    void swapNodes(int n) {
//        if (!head || n <= 0) {
//            return; // List is empty or n is invalid
//        }
//
//        Node<T>* firstFromStart = head;
//        Node<T>* firstFromEnd = head;
//        Node<T>* prevFirstFromStart = nullptr;
//        Node<T>* prevFirstFromEnd = nullptr;
//
//        // Move firstFromStart to the nth node from the start
//        for (int i = 1; i < n; ++i) {
//            if (!firstFromStart) {
//                return; // n is greater than the number of nodes
//            }
//            prevFirstFromStart = firstFromStart;
//            firstFromStart = firstFromStart->next;
//        }
//
//        // Move firstFromEnd to the nth node from the end
//        Node<T>* current = head;
//        for (int i = 0; i < n - 1; ++i) {
//            if (!current) {
//                return; // n is greater than the number of nodes
//            }
//            current = current->next;
//        }
//
//        firstFromEnd = current;
//        prevFirstFromEnd = firstFromEnd->prev;
//
//        if (prevFirstFromStart) {
//            prevFirstFromStart->next = firstFromEnd;
//        }
//        else {
//            head = firstFromEnd;
//        }
//
//        if (prevFirstFromEnd) {
//            prevFirstFromEnd->next = firstFromStart;
//        }
//        else {
//            head = firstFromStart;
//        }
//
//        Node<T>* tempPrev = firstFromStart->prev;
//        firstFromStart->prev = firstFromEnd->prev;
//        firstFromEnd->prev = tempPrev;
//    }
//
//    void removeNodesWithEvenDigitSum() {
//        Node<T>* current = head;
//        while (current) {
//            int sum = 0;
//            int num = current->data;
//            while (num > 0) {
//                sum += num % 10;
//                num /= 10;
//            }
//
//            if (sum % 2 == 0) {
//                if (current->prev) {
//                    current->prev->next = current->next;
//                }
//                else {
//                    head = current->next;
//                }
//
//                if (current->next) {
//                    current->next->prev = current->prev;
//                }
//
//                Node<T>* temp = current;
//                current = current->next;
//                delete temp;
//            }
//            else {
//                current = current->next;
//            }
//        }
//    }
//
//    std::pair<int, int> getSumAndProduct() {
//        int sum = 0;
//        int product = 1;
//        Node<T>* current = head;
//        while (current) {
//            sum += current->data;
//            product *= current->data;
//            current = current->next;
//        }
//        return std::make_pair(sum, product);
//    }
//
//    ~DoubleLinkedList() {
//        Node<T>* current = head;
//        while (current) {
//            Node<T>* temp = current;
//            current = current->next;
//            delete temp;
//        }
//    }
//};
//
//int main() {
//    DoubleLinkedList<int> myList;
//
//    myList.insert(5);
//    myList.insert(4);
//    myList.insert(3);
//    myList.insert(2);
//    myList.insert(1);
//
//    std::cout << "Original List: ";
//    myList.print();
//
//    myList.reverseLinkList();
//    std::cout << "Reversed List: ";
//    myList.print();
//
//    if (myList.isPalindrome()) {
//        std::cout << "Palindrome" << std::endl;
//    }
//    else {
//        std::cout << "Not a Palindrome" << std::endl;
//    }
//
//    myList.reorderLinkList();
//    std::cout << "Reordered List: ";
//    myList.print();
//
//    myList.swapNodes(3);
//    std::cout << "Swapped List (n=3): ";
//    myList.print();
//
//    myList.removeNodesWithEvenDigitSum();
//    std::cout << "List after removing nodes with even digit sum: ";
//    myList.print();
//
//    std::pair<int, int> sumAndProduct = myList.getSumAndProduct();
//    std::cout << "Sum: " << sumAndProduct.first << std::endl;
//    std::cout << "Product: " << sumAndProduct.second << std::endl;
//
//    return 0;
//}
//
