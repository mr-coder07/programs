
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

int countNodes(Node* start) {
    if (start == NULL) {
        return 0;
    }

    Node* slow = start;
    Node* fast = start;
    int count = 0;

    do {
        count++;
        slow = slow->next;
        fast = fast->next->next;
    } while (slow != fast);

    return count;
}

int main() {
    // Example usage
    Node* start = new Node(1);
    start->next = new Node(2);
}
