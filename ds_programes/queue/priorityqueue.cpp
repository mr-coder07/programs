#include <iostream>

class Node {
public:
    int data;
    int priority;
    Node* next;
};

class PriorityQueue {
private:
    Node* head;

public:
    PriorityQueue() : head(NULL) {}

    void push(int data, int priority) {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->priority = priority;

        if (head == NULL || priority < head->priority) {
            newNode->next = head;
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != NULL && temp->next->priority <= priority) {
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }

    void pop() {
        if (head == NULL) {
            std::cout << "Priority Queue is empty.\n";
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    int top() {
        if (head == NULL) {
            std::cout << "Priority Queue is empty.\n";
            return -1; // Return some default value
        }
        return head->data;
    }

    bool empty() {
        return head == NULL;
    }
};

int main() {
    PriorityQueue pq;

    pq.push(10, 2);
    pq.push(30, 1);
    pq.push(20, 3);
    pq.push(22, 1);

    while (!pq.empty()) {
        std::cout << pq.top() << " ";
        pq.pop();
    }
    std::cout << "\n";

    return 0;
}
