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

int main() {
    const int max_size = 100;
    int myArray[max_size] = {5, 2, 8, 12, 3, 7};
    int arraySize = 6;

    int targetElement = 12;

    int index = linearSearch(myArray, arraySize, targetElement);

    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
