#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* front = NULL;
Node* rear = NULL;

// Enqueue
void enqueue(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if (rear == NULL) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
    cout << "Inserted: " << value << endl;
}

// Dequeue
void dequeue() {
    if (front == NULL) {
        cout << "Queue is Empty!" << endl;
        return;
    }
    cout << "Deleted: " << front->data << endl;
    front = front->next;

    if (front == NULL)
        rear = NULL;
}

// Display
void display() {
    Node* temp = front;
    if (temp == NULL) {
        cout << "Queue is Empty!" << endl;
        return;
    }
    cout << "Queue elements: ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int choice, value;

    do {
        cout << "\n--- QUEUE MENU ---\n";
        cout << "1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
        }
    } while (choice != 4);

    return 0;
}
