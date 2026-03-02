#include <iostream>
using namespace std;

#define SIZE 10   // Size of hash table

class HashTable {
private:
    int table[SIZE];

public:
    HashTable() {
        // Initialize all values as -1 (means empty)
        for (int i = 0; i < SIZE; i++) {
            table[i] = -1;
        }
    }

    // Hash Function
    int hashFunction(int key) {
        return key % SIZE;
    }

    // Insert using Linear Probing
    void insert(int key) {
        int index = hashFunction(key);

        // Handle collision
        while (table[index] != -1) {
            index = (index + 1) % SIZE;
        }

        table[index] = key;
    }

    // Display Hash Table
    void display() {
        cout << "\nHash Table:\n";
        for (int i = 0; i < SIZE; i++) {
            if (table[i] == -1)
                cout << i << " --> Empty\n";
            else
                cout << i << " --> " << table[i] << "\n";
        }
    }
};

int main() {
    HashTable h;
    int n, value;

    cout << "Enter number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter value " << i + 1 << ": ";
        cin >> value;
        h.insert(value);
    }

    h.display();

    return 0;
}
