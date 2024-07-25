#include <iostream>
using namespace std;

int binarysearch(int arr[], int size) {
    int low = 0;
    int high = size - 1;
    int key;
    cout << "Enter the key element: ";
    cin >> key;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;  // Element not found
}

int main() {
    int arr[5] = {1, 3, 4, 5, 6};
    int size = 5;
    int result = binarysearch(arr, size);

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found." << endl;

    return 0;
}
