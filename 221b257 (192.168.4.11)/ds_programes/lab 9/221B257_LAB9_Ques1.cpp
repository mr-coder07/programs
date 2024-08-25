/*1. Write a menu-driven program to implement stack using array with following options:
1.Push
2.Pop
3.Display
4.Exit*/
//this program is made by palak gupta(221B258)
#include <iostream>
using namespace std;

class Stack {
private:
    int size;
    int top;
    int* stack;

public:
    Stack(int size) {
        this->size = size;
        this->top = -1;
        stack = new int[size];
    }

    bool isFull() {
        return top == size - 1;
    }

    bool isEmpty() {
        return top == -1;
    }

    void push(int value) {
        if (isFull()) {
            cout << "Stack is full. Cannot push element." << endl;
        } else {
            stack[++top] = value;
            cout << "Pushed " << value << " onto the stack." << endl;
        }
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack is empty. Cannot pop element." << endl;
            return -1;  // Return a sentinel value for an empty stack
        } else {
            int poppedValue = stack[top--];
            cout << "Popped " << poppedValue << " from the stack." << endl;
            return poppedValue;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Stack elements:" << endl;
            for (int i = top; i >= 0; i--) {
                cout << stack[i] << endl;
            }
        }
    }
};

int main() {
    int size;
    cout << "Enter the size of the stack: ";
    cin >> size;
    Stack stack(size);

    while (true) {
        cout << "\nMenu:" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                int value;
                cout << "Enter the value to push: ";
                cin >> value;
                stack.push(value);
                break;

            case 2:
                stack.pop();
                break;

            case 3:
                stack.display();
                break;

            case 4:
                cout << "Exiting the program." << endl;
                return 0;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}

