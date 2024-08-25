#include <iostream>
using namespace std;

const int MAX_SIZE = 5;
int queue[MAX_SIZE];
int front = -1, rear = -1;

bool isFull() {
    if ((front == 0 && rear == MAX_SIZE - 1) || (front == rear + 1))
        return true;
    return false;
}

bool isEmpty() {
    return (front == -1);
}

void insertElement(int element) {
    if (isFull()) {
        cout << "Queue Overflow" << endl;
    } else {
        if (front == -1)
            front = 0;
        rear = (rear + 1) % MAX_SIZE;
        queue[rear] = element;
        cout << "Element " << element << " is added to the queue" << endl;
    }
}

void deleteElement() {
    if (isEmpty()) {
        cout << "Queue Underflow" << endl;
    } else {
        int deletedElement = queue[front];
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % MAX_SIZE;
        }
        cout << "Deleted element is " << deletedElement << endl;
    }
}

void displayFrontElement() {
    if (isEmpty()) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Element at the front is " << queue[front] << endl;
    }
}

void displayQueue() {
    if (isEmpty()) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue is:" << endl;
        int i = front;
        do {
            cout << queue[i] << " ";
            i = (i + 1) % MAX_SIZE;
        } while (i != (rear + 1) % MAX_SIZE);
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

