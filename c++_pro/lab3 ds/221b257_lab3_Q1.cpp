#include <iostream>
using namespace std;

void insertElement(int arr[], int& size, int index, int element) {
    if (index < 0 || index > size) {
        cout << "Invalid index" << endl;
        return;
    }
    for (int i = size; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    arr[index] = element;
    size++;

    cout << "Element inserted successfully!" << endl;
}

int main() {
    const int max_size = 100;
    int myArray[max_size] = {1, 2, 3, 4, 5};
    int arraySize = 5;

    int insertIndex = 2;
    int newElement = 10;

    insertElement(myArray, arraySize, insertIndex, newElement);

    cout << "Updated array: ";
    for (int i = 0; i < arraySize; i++) {
        cout << myArray[i] << " ";
    }
    cout << endl;

    return 0;
}
