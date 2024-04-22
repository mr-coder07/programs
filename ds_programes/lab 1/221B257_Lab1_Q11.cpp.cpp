//=====================================================
//This program is written by [OM DUTT MISHRA (221b257)]
//=====================================================
#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    // Dynamically allocate memory for the array
    int* dynamicArray = new int[size];

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; ++i) {
        cin >> dynamicArray[i];
    }

    int elementToSearch;
    cout << "Enter the element to search for: ";
    cin >> elementToSearch;

    bool found = false;
    for (int i = 0; i < size; ++i) {
        if (dynamicArray[i] == elementToSearch) {
            found = true;
            break;
        }
    }

    // Display the search result
    if (found) {
        cout << "Element " << elementToSearch << " found in the array." << std::endl;
    } else {
        cout << "Element " << elementToSearch << " not found in the array." << std::endl;
    }
    delete[] dynamicArray;

    return 0;
}
