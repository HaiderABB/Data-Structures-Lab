#include <iostream>

// HashItem struct
template <class v>
struct HashItem {
    int key;
    v value;
    int status;

    HashItem() : key(0), value(v()), status(0) {}
};

// HashMap class
template <class v>
class HashMap {
protected:
    HashItem<v>* hashArray;
    int capacity;
    int currentElements;

    virtual int getNextCandidateIndex(int key, int i) = 0;

    void doubleCapacity() {
        int oldCapacity = capacity;
        HashItem<v>* oldArray = hashArray;

        capacity *= 2;
        hashArray = new HashItem<v>[capacity];

        for (int i = 0; i < oldCapacity; ++i) {
            if (oldArray[i].status == 2) {
                insert(oldArray[i].key, oldArray[i].value);
            }
        }

        delete[] oldArray;
    }

public:
    // Default constructor
    HashMap() : capacity(10), currentElements(0) {
        hashArray = new HashItem<v>[capacity];
    }

    // Parameterized constructor
    HashMap(int const capacity) : currentElements(0) {
        if (capacity <= 1) {
            std::cerr << "Error: Capacity must be greater than 1." << std::endl;
            exit(EXIT_FAILURE);
        }

        this->capacity = capacity;
        hashArray = new HashItem<v>[capacity];
    }

    // Destructor
    ~HashMap() {
        delete[] hashArray;
    }

    // Insert method
    void insert(int const key, v const value) {
        int index = key % capacity;
        int i = 1;

        while (hashArray[index].status == 2) {
            index = getNextCandidateIndex(key, i);
            ++i;
        }

        hashArray[index].key = key;
        hashArray[index].value = value;
        hashArray[index].status = 2;
        ++currentElements;

        // Check if rehashing is needed
        if (static_cast<double>(currentElements) / capacity >= 0.75) {
            doubleCapacity();
        }
    }

    // Delete method
    bool deleteKey(int const key) {
        int index = key % capacity;
        int i = 1;

        while (hashArray[index].status != 0 && i <= capacity) {
            if (hashArray[index].status == 2 && hashArray[index].key == key) {
                hashArray[index].status = 1;  // Mark as deleted
                return true;
            }
            index = getNextCandidateIndex(key, i);
            ++i;
        }

        return false;
    }

    // Get method
    v* get(int const key) {
        int index = key % capacity;
        int i = 1;

        while (hashArray[index].status != 0 && i <= capacity) {
            if (hashArray[index].status == 2 && hashArray[index].key == key) {
                return &hashArray[index].value;
            }
            index = getNextCandidateIndex(key, i);
            ++i;
        }

        return nullptr;
    }
};

// Concrete implementation of getNextCandidateIndex for linear probing
template <class v>
class LinearProbingHashMap : public HashMap<v> {
public:
    LinearProbingHashMap() : HashMap<v>() {}

    int getNextCandidateIndex(int key, int i) override {
        return (key + i) % this->capacity;
    }
};

int main() {
    // Example usage of the HashMap
    LinearProbingHashMap<int> hashMap;

    hashMap.insert(1, 10);
    hashMap.insert(2, 20);
    hashMap.insert(3, 30);

    int* value = hashMap.get(2);
    if (value != nullptr) {
        std::cout << "Value at key 2: " << *value << std::endl;
    }
    else {
        std::cout << "Key 2 not found." << std::endl;
    }

    hashMap.deleteKey(2);

    value = hashMap.get(2);
    if (value != nullptr) {
        std::cout << "Value at key 2: " << *value << std::endl;
    }
    else {
        std::cout << "Key 2 not found." << std::endl;
    }

    return 0;
}