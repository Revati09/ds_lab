#include <iostream>
using namespace std;

int main() {
    int arr[100], n, choice, pos, value, key, temp;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    do {
        cout << "\n--- Array Operations Menu ---\n";
        cout << "1. Traversal\n";
        cout << "2. Insertion\n";
        cout << "3. Deletion\n";
        cout << "4. Searching (Linear Search)\n";
        cout << "5. Updating\n";
        cout << "6. Sorting\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {

        case 1: 
            cout << "Array elements are:\n";
            for(int i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }
            break;

        case 2: 
            cout << "Enter position and value to insert: ";
            cin >> pos >> value;
            for(int i = n; i > pos; i--) {
                arr[i] = arr[i - 1];
            }
            arr[pos] = value;
            n++;
            cout << "Element inserted successfully.\n";
            break;

        case 3: 
            cout << "Enter position to delete: ";
            cin >> pos;
            for(int i = pos; i < n - 1; i++) {
                arr[i] = arr[i + 1];
            }
            n--;
            cout << "Element deleted successfully.\n";
            break;

        case 4:
            cout << "Enter element to search: ";
            cin >> key;
            for(int i = 0; i < n; i++) {
                if(arr[i] == key) {
                    cout << "Element found at index " << i << endl;
                    break;
                }
                if(i == n - 1) {
                    cout << "Element not found.\n";
                }
            }
            break;

        case 5:
            cout << "Enter index and new value: ";
            cin >> pos >> value;
            arr[pos] = value;
            cout << "Element updated successfully.\n";
            break;

        case 6:
            for(int i = 0; i < n - 1; i++) {
                for(int j = 0; j < n - i - 1; j++) {
                    if(arr[j] > arr[j + 1]) {
                        temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp;
                    }
                }
            }
            cout << "Array sorted successfully.\n";
            break;

        case 7:
            cout << "Exiting program.\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while(choice != 7);

    return 0;
}