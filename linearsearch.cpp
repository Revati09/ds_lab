#include <iostream>
using namespace std;

int main() {
    int n;

    // Taking input for array size
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    // Taking array elements
    cout << "Enter the elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Check if array is sorted (ascending)
    bool sorted = true;
    for(int i = 0; i < n - 1; i++) {
        if(arr[i] > arr[i + 1]) {
            sorted = false;
            break;
        }
    }

    if(sorted) {
        cout << "The list is sorted in ascending order.\n";
    } else {
        cout << "The list is NOT sorted.\n";
    }

    // Element to search
    int key;
    cout << "Enter the element to search: ";
    cin >> key;

    // Linear Search logic
    bool found = false;
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            cout << "Element " << key << " found at index " << i << endl;
            found = true;
            break;
        }
    }

    if(!found) {
        cout << "Element " << key << " not found in the array.\n";
    }

    return 0;
}

