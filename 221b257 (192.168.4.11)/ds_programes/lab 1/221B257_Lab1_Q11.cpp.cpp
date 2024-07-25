//=====================================================
//This program is written by [OM DUTT MISHRA (221b257)]
//=====================================================
#include <iostream>

int main() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    // Dynamically allocate memory for the array
    int* dynamicArray = new int[size];

    std::cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; ++i) {
        std::cin >> dynamicArray[i];
    }

    int elementToSearch;
    std::cout << "Enter the element to search for: ";
    std::cin >> elementToSearch;

    bool found = false;
    for (int i = 0; i < size; ++i) {
        if (dynamicArray[i] == elementToSearch) {
            found = true;
            break;
        }
    }

    // Display the search result
    if (found) {
        std::cout << "Element " << elementToSearch << " found in the array." << std::endl;
    } else {
        std::cout << "Element " << elementToSearch << " not found in the array." << std::endl;
    }
    delete[] dynamicArray;

    return 0;
}
