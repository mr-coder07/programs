
#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int value) {
        data = value;
        prev = NULL;
        next = NULL;
    }
};

class DoublyLinkedList {
public:
    Node* head;
    Node* tail;

    DoublyLinkedList() {
        head = NULL;
        tail = NULL;
    }

    void insertAtBeginning(int data) {
        Node* newNode = new Node(data);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void insertAfterPosition(int data, int position) {
        Node* newNode = new Node(data);
        Node* current = head;
        int currentPosition = 1;
        while (currentPosition < position && current != NULL) {
            current = current->next;
            currentPosition++;
        }
        if (current != NULL) {
            newNode->next = current->next;
            newNode->prev = current;
            if (current->next != NULL) {
                current->next->prev = newNode;
            }
            current->next = newNode;
            if (current == tail) {
                tail = newNode;
            }
        } else {
            cout << "Invalid position. Node not inserted." << endl;
        }
    }

    void insertAtEnd(int data) {
        Node* newNode = new Node(data);
        if (tail == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void deleteFromBeginning() {
        if (head == NULL) {
            cout << "The list is empty. Nothing to delete." << endl;
        } else {
            Node* temp = head;
            head = head->next;
            if (head != NULL) {
                head->prev = NULL;
            } else {
                tail = NULL;
            }
            delete temp;
        }
    }

    void deleteAfterPosition(int position) {
        if (head == NULL) {
            cout << "The list is empty. Nothing to delete." << endl;
            return;
        }
        if (position <= 0) {
            cout << "Invalid position. Node not deleted." << endl;
            return;
        }
        if (position == 1) {
            deleteFromBeginning();
            return;
        }

        Node* current = head;
        int currentPosition = 1;
        while (currentPosition < position && current != NULL) {
            current = current->next;
            currentPosition++;
        }

        if (current != NULL && current != tail) {
            Node* temp = current->next;
            current->next = temp->next;
            if (temp->next != NULL) {
                temp->next->prev = current;
            } else {
                tail = current;
            }
            delete temp;
        } else {
            cout << "Invalid position. Node not deleted." << endl;
        }
    }

    void deleteFromEnd() {
        if (tail == NULL) {
            cout << "The list is empty. Nothing to delete." << endl;
        } else {
            Node* temp = tail;
            tail = tail->prev;
            if (tail != NULL) {
                tail->next = NULL;
            } else {
                head = NULL;
            }
            delete temp;
        }
    }

    void display() {
        Node* current = head;
        while (current != NULL) {
            cout << current->data << " <-> ";
            current = current->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    DoublyLinkedList linkedList;
    int choice;
    int data, position;

    do {
        cout << "\nDoubly Linked List Menu:" << endl;
        cout << "1. Insert at the beginning" << endl;
        cout << "2. Insert after a position" << endl;
        cout << "3. Insert at the end" << endl;
        cout << "4. Delete from the beginning" << endl;
        cout << "5. Delete after a position" << endl;
        cout << "6. Delete from the end" << endl;
        cout << "7. Display the list" << endl;
        cout << "8. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter data to insert at the beginning: ";
                cin >> data;
                linkedList.insertAtBeginning(data);
                break;
            case 2:
                cout << "Enter data to insert: ";
                cin >> data;
                cout << "Enter the position to insert after: ";
                cin >> position;
                linkedList.insertAfterPosition(data, position);
                break;
            case 3:
                cout << "Enter data to insert at the end: ";
                cin >> data;
                linkedList.insertAtEnd(data);
                break;
            case 4:
                linkedList.deleteFromBeginning();
                break;
            case 5:
                cout << "Enter the position to delete after: ";
                cin >> position;
                linkedList.deleteAfterPosition(position);
                break;
            case 6:
                linkedList.deleteFromEnd();
                break;
            case 7:
                linkedList.display();
                break;
            case 8:
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 8);

    return 0;
}
