
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

    void append(int data) {
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
    int n;
    int k;
    cout << "Enter the number of nodes: ";

    cin >> n;

    if (n > 0) {
        DoublyLinkedList linkedList;
        for (int i = 1; i <= n; i++) {

            cout << "Enter the element to append";
            cin>>k;
            linkedList.append(k);
        }

        cout << "Doubly Linked List:" << endl;
        linkedList.display();
    } else {
        cout << "Please enter a valid number of nodes (greater than 0)." << endl;
    }

    return 0;
}
