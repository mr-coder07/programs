#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1;  
}

void deleteElement(int arr[], int& size, int index) {
    if (index < 0 || index >= size) {
        cout << "Invalid index" << endl;
        return;
    }

    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    size--;

    cout << "Element deleted successfully!" << endl;
}

int main() {
    const int max_size = 100;
    int myArray[max_size] = {5, 2, 8, 12, 3, 7};
    int arraySize = 6;

    int elementToDelete = 12;

    int indexToDelete = linearSearch(myArray, arraySize, elementToDelete);

    if (indexToDelete != -1) {
        deleteElement(myArray, arraySize, indexToDelete);
        cout << "Updated array: ";
        for (int i = 0; i < arraySize; i++) {
            cout << myArray[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Error: Element not found" << endl;
    }

    return 0;
}
