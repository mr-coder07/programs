#include <iostream>
#include <vector>
using namespace std;

class PriorityQueue {
private:
    vector<int> elements;

public:
    void insertElement(int element) {
        elements.push_back(element);
        int index = elements.size() - 1;
        while (index > 0) {
            int parentIndex = (index - 1) / 2;
            if (elements[index] > elements[parentIndex]) {
                swap(elements[index], elements[parentIndex]);
                index = parentIndex;
            } else {
                break;
            }
        }
        cout << "Element " << element << " is inserted with priority." << endl;
    }

    int getHighestPriorityElement() {
        if (elements.empty()) {
            cout << "Priority Queue is empty." << endl;
            return -1; // Return a sentinel value to indicate an empty queue
        }
        return elements[0];
    }

    void removeHighestPriorityElement() {
        if (elements.empty()) {
            cout << "Priority Queue is empty." << endl;
            return;
        }

        swap(elements[0], elements[elements.size() - 1]);
        elements.pop_back();
        int index = 0;
        int size = elements.size();

        while (true) {
            int leftChild = 2 * index + 1;
            int rightChild = 2 * index + 2;
            int largest = index;

            if (leftChild < size && elements[leftChild] > elements[largest]) {
                largest = leftChild;
            }
            if (rightChild < size && elements[rightChild] > elements[largest]) {
                largest = rightChild;
            }

            if (largest != index) {
                swap(elements[index], elements[largest]);
                index = largest;
            } else {
                break;
            }
        }
        cout << "Removed Highest Priority Element." << endl;
    }

    bool isEmpty() {
        return elements.empty();
    }
};

int main() {
    PriorityQueue priorityQueue;
    int choice, element;

    do {
        cout << "Priority Queue Operations:" << endl;
        cout << "1. Insert Element" << endl;
        cout << "2. Get Highest Priority Element" << endl;
        cout << "3. Remove Highest Priority Element" << endl;
        cout << "4. Check if Priority Queue is Empty" << endl;
        cout << "5. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the element to insert: ";
                cin >> element;
                priorityQueue.insertElement(element);
                break;

            case 2:
                if (!priorityQueue.isEmpty()) {
                    cout << "Highest Priority Element: " << priorityQueue.getHighestPriorityElement() << endl;
                } else {
                    cout << "Priority Queue is empty." << endl;
                }
                break;

            case 3:
                if (!priorityQueue.isEmpty()) {
                    priorityQueue.removeHighestPriorityElement();
                } else {
                    cout << "Priority Queue is empty." << endl;
                }
                break;

            case 4:
                if (priorityQueue.isEmpty()) {
                    cout << "Priority Queue is empty." << endl;
                } else {
                    cout << "Priority Queue is not empty." << endl;
                }
                break;

            case 5:
                cout << "Exiting the program." << endl;
                break;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}

