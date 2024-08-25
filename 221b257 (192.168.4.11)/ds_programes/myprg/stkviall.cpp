#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
    node(int val) : data(val), next(nullptr) {}
};

class stack {
public:
    node* head;

    stack() : head(nullptr) {}

    void push(int dat) {
        node* newNode = new node(dat);
        newNode->next = head;
        head = newNode;
    }

    void pop() {
        if (head) {
            node* temp = head;
            head = head->next;
            delete temp;
        }
        else {
            cout << "Underflow: The stack is empty." << endl;
        }
    }

    void prints() {
        node* temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    stack s;
    s.push(234);
    s.push(5453);
    s.push(3);
    s.push(79);
    s.pop();
    s.prints();
    s.pop();
    s.prints();

    return 0;
}
