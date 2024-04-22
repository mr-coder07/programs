
#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[1000];
    int n = 0;

    int choice;
    do {
        cout << "Enter a number (or 'q' to quit): ";
        cin >> choice;

        if(choice == 'q') {
            break;
        }


        arr[n++] = choice;  // enters the element to array after each iteration
        insertionSort(arr, n);

        cout << "Sorted array: ";
        for(int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;

    } while (true);

    return 0;
}

