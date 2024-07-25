#include <iostream>
using namespace std;

const int MAX_SIZE = 5;
int queue[MAX_SIZE];
int front = -1, rear = -1;

void insertElement(int element) {
    if (rear == MAX_SIZE - 1) {
        cout << "Queue Overflow" << endl;
    } else {
        if (front == -1) {
            front = 0;
        }
        rear++;
        queue[rear] = element;
        cout << "Element " << element << " is added to the queue" << endl;
    }
}

void deleteElement() {
    if (front == -1) {
        cout << "Queue Underflow" << endl;
    } else {
        int deletedElement = queue[front];
        if (front == rear) {
            front = rear = -1;
        } else {
            front++;
        }
        cout << "Deleted element is " << deletedElement << endl;
    }
}

void displayFrontElement() {
    if (front == -1) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Element at the front is " << queue[front] << endl;
    }
}

void displayQueue() {
    if (front == -1) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue is:" << endl;
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int choice, element;

    do {
        cout << "1.Insert\n2.Delete\n3.Display element at the front\n4.Display all elements of the queue\n5.Quit\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Input the element for adding in queue: ";
                cin >> element;
                insertElement(element);
                break;

            case 2:
                deleteElement();
                break;

            case 3:
                displayFrontElement();
                break;

            case 4:
                displayQueue();
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

