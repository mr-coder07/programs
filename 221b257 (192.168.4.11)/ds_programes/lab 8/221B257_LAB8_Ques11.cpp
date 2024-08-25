
#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

class CircularLinkedList {
public:
    Node* head;

    CircularLinkedList() {
        head = NULL;
    }

    void insert(int data) {
        Node* newNode = new Node(data);
        if (head == NULL) {
            head = newNode;
            newNode->next = head;
        } else {
            Node* temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = head;
        }
    }

    void display() {
        if (head == NULL) {
            cout << "Circular Linked List is empty." << endl;
            return;
        }
        Node* current = head;
        do {
            cout << current->data << " -> ";
            current = current->next;
        } while (current != head);
        cout << " (head)" << endl;
    }
};

int main() {
    CircularLinkedList circularList;
    int n, data;

    cout << "Enter the number of nodes: ";
    cin >> n;

    if (n > 0) {
        for (int i = 1; i <= n; i++) {
            cout << "Enter data for node " << i << ": ";
            cin >> data;
            circularList.insert(data);
        }

        cout << "Circular Linked List:" << endl;
        circularList.display();
    } else {
        cout << "Please enter a valid number of nodes (greater than 0)." << endl;
    }

    return 0;
}

