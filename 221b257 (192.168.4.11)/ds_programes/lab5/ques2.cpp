#include <iostream>
#include <vector>

int findTransitionIndex(std::vector<int> arr) {
    int size = arr.size();
    
    if (size < 3)
        return -1; 
    for (int i = 1; i < size - 1; ++i) {
        if (arr[i] > arr[i + 1])
            return i;  // Transition point found
    }
    
    return -1;  // No transition point found
}

int main() {
    std::vector<int> arr = {1, 2, 3, 7, 5, 4, 3, 2, 1};
    int transitionIndex = findTransitionIndex(arr);
    
    if (transitionIndex != -1)
        std::cout << "The transition from increasing to decreasing occurs at index: " << transitionIndex << std::endl;
    else
        std::cout << "The array is either always increasing or always decreasing." << std::endl;
    
    return 0;
}
