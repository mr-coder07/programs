#include <iostream>
using namespace std;

bool hasDuplicates(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                return true;  // Found a duplicate element
            }
        }
    }
    return false;  
}

int main() {
    const int max_size = 100;
    int myArray[max_size] = {5, 2, 8, 12, 3, 7, 8};

    int arraySize = 7;

    if (hasDuplicates(myArray, arraySize)) {
        cout << "Array has duplicate elements." << endl;
    } else {
        cout << "Array does not have duplicate elements." << endl;
    }

    return 0;
}
