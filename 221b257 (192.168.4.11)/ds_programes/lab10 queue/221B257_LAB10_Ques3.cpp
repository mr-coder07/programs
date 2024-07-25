#include <iostream>
using namespace std;

// Structure for a node in the queue
struct Node {
    int data;
    Node* next;
};

class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() {
        front = rear = NULL;
    }

    // Function to insert an element into the queue
    void insertElement(int element) {
        Node* newNode = new Node;
        newNode->data = element;
        newNode->next = NULL;

        if (rear == NULL) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }

        cout << "Element " << element << " is added to the queue" << endl;
    }

    // Function to delete an element from the queue
    void deleteElement() {
        if (front == NULL) {
            cout << "Queue Underflow" << endl;
            return;
        }

        int deletedElement = front->data;
        Node* temp = front;
        front = front->next;
        delete temp;

        cout << "Deleted element is " << deletedElement << endl;
    }

    // Function to display the element at the front
    void displayFrontElement() {
        if (front == NULL) {
            cout << "Queue is empty" << endl;
        } else {
            cout << "Element at the front is " << front->data << endl;
        }
    }

    // Function to display all elements of the queue
    void displayQueue() {
        if (front == NULL) {
            cout << "Queue is empty" << endl;
        } else {
            cout << "Queue is:" << endl;
            Node* current = front;
            while (current != NULL) {
                cout << current->data << " ";
                current = current->next;
            }
            cout << endl;
        }
    }
};

int main() {
    Queue queue;
    int choice, element;

    do {
        cout << "1.Insert\n2.Delete\n3.Display element at the front\n4.Display all elements of the queue\n5.Quit\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Input the element for adding in queue: ";
                cin >> element;
                queue.insertElement(element);
                break;

            case 2:
                queue.deleteElement();
                break;

            case 3:
                queue.displayFrontElement();
                break;

            case 4:
                queue.displayQueue();
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

