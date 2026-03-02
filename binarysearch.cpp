#include <iostream>
using namespace std;

int main() {
    int n, key;

    // Input array size
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    // Input sorted array elements
    cout << "Enter elements in sorted order:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Element to search
    cout << "Enter element to search: ";
    cin >> key;

    int low = 0, high = n - 1;
    bool found = false;

    // Binary Search logic
    while(low <= high) {
        int mid = (low + high) / 2;

        if(arr[mid] == key) {
            cout << "Element " << key << " found at index " << mid << endl;
            found = true;
            break;
        }
        else if(arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if(!found) {
        cout << "Element " << key << " not found in the array.\n";
    }

    return 0;
}

