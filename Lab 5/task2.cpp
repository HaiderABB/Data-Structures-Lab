//#include <iostream>
//using namespace std;
//
//class PersonNode {
//    friend class JosephusList;
//
//private:
//    int id;
//    PersonNode* next;
//
//public:
//    PersonNode(int val) : id(val), next(nullptr) {}
//};
//
//class JosephusList {
//private:
//    PersonNode* head;
//
//public:
//    JosephusList(int N) {
//        if (N <= 0) {
//            cerr << "Invalid value of N. N must be greater than 0." << endl;
//            return;
//        }
//
//        head = new PersonNode(1);
//        PersonNode* current = head;
//
//        for (int i = 2; i <= N; i++) {
//            current->next = new PersonNode(i);
//            current = current->next;
//        }
//
//        current->next = head; // Circular linking
//    }
//
//    ~JosephusList() {
//        if (!head) return;
//
//        PersonNode* current = head->next;
//        head->next = nullptr;
//
//        while (current != nullptr) {
//            PersonNode* nextNode = current->next;
//            delete current;
//            current = nextNode;
//        }
//    }
//
//    int getWinner(int M) {
//        if (!head) return -1;
//
//        PersonNode* current = head;
//
//        while (current->next != current) {
//            for (int i = 1; i < M - 1; i++) {
//                current = current->next;
//            }
//
//            PersonNode* temp = current->next;
//            cout << "Eliminating person with id " << temp->id << endl;
//            current->next = temp->next;
//            delete temp;
//
//            current = current->next;
//        }
//
//        return current->id;
//    }
//
//    void display() {
//        if (!head) return;
//
//        PersonNode* current = head;
//
//        do {
//            cout << current->id << " ";
//            current = current->next;
//        } while (current != head);
//
//        cout << endl;
//    }
//};
//
//int main() {
//    JosephusList j(5);
//    cout << "Winner: " << j.getWinner(3) << endl;
//    j.display();
//}
