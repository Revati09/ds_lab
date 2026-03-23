#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* top = NULL;

// Push operation
void push(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = top;
    top = newNode;
    cout << "Inserted: " << value << endl;
}

// Pop operation
void pop() {
    if (top == NULL) {
        cout << "Stack is Empty!" << endl;
        return;
    }
    cout << "Deleted: " << top->data << endl;
    top = top->next;
}

// Display
void display() {
    Node* temp = top;
    if (temp == NULL) {
        cout << "Stack is Empty!" << endl;
        return;
    }
    cout << "Stack elements: ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int choice, value;

    do {
        cout << "\n--- STACK MENU ---\n";
        cout << "1. Push\n2. Pop\n3. Display\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
        }
    } while (choice != 4);

    return 0;
}
