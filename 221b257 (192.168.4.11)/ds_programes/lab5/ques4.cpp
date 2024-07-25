#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int findMaxFrequencyElement(const vector<int>& arr) {
    unordered_map<int, int> frequencyMap;

    for (int element : arr)
        frequencyMap[element]++;

    int maxFrequencyElement = -1, maxFrequency = 0;

    for (const auto& entry : frequencyMap) {
        if (entry.second > maxFrequency) {
            maxFrequency = entry.second;
            maxFrequencyElement = entry.first;
        }
    }

    return maxFrequencyElement;
}

int main() {
    int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int maxFrequencyElement = findMaxFrequencyElement(arr);

    if (maxFrequencyElement != -1)
        cout << "Element with the maximum frequency: " << maxFrequencyElement << endl;
    else
        cout << "Array is empty." << endl;

    return 0;
}
