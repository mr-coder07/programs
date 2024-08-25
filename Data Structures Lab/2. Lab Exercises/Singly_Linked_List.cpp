
#include <iostream>

using namespace std;

// Define a structure for a Node
struct Node {
    int INFO;
    Node* NEXT;
};

Node* InsertBeg(Node* START, int info);
Node* InsertEnd(Node* START, int info);
Node* InsertAtGivenLoc(Node* START, int info, int Loc);
Node* DeleteFromLoc_List(Node* START, int Loc);
void DisplayList(Node* START);
int main() {
    Node* START = nullptr; // Initialize an empty list
    int choice, info, loc;

    do {
        cout << "\nMenu:\n";
        cout << "1. Insert at the beginning\n";
        cout << "2. Insert at the end\n";
        cout << "3. Insert at a given location\n";
        cout << "4. Delete from a specified location\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the value to insert: ";
                cin >> info;
                START = InsertBeg(START, info);
                DisplayList(START);
                break;

            case 2:
                cout << "Enter the value to insert: ";
                cin >> info;
                START = InsertEnd(START, info);
                DisplayList(START);
                break;

            case 3:
                cout << "Enter the value to insert: ";
                cin >> info;
                cout << "Enter the location: ";
                cin >> loc;
                START = InsertAtGivenLoc(START, info, loc);
                DisplayList(START);
                break;

            case 4:
                cout << "Enter the location to delete: ";
                cin >> loc;
                START = DeleteFromLoc_List(START, loc);
                DisplayList(START);
                break;

            case 5:
                cout << "Exiting the program.\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }

    } while (choice != 5);

    // Clean up and free memory
    Node* current = START;
    while (current != nullptr) {
        Node* temp = current;
        current = current->NEXT;
        delete temp;
    }

    return 0;
}

// Function to insert a node at the beginning of the list
Node* InsertBeg(Node* START, int info) {
    Node* New_Node = new Node;
    New_Node->INFO = info;
    New_Node->NEXT = START;
    START = New_Node;
    return START;
}

// Function to insert a node at the end of the list
Node* InsertEnd(Node* START, int info) {
    Node* New_Node = new Node;
    New_Node->INFO = info;
    New_Node->NEXT = nullptr;
    if (START == nullptr) {
        START = New_Node;
    } else {
        Node* Temp = START;
        while (Temp->NEXT != nullptr) {
            Temp = Temp->NEXT;
        }
        Temp->NEXT = New_Node;
    }

    return START;
}

// Function to insert a node at a given location in the list
Node* InsertAtGivenLoc(Node* START, int info, int Loc) {
    Node* Temp = START;
    if (Loc < 1) {
        cout << "Invalid location!" << endl;
        return START;
    }
    Node* New_Node = new Node;
    New_Node->INFO = info;

    if (Loc == 1) {
        New_Node->NEXT = START;
        START = New_Node;
        return START;
    }

    for (int i = 1; i < Loc - 1 && Temp != nullptr; i++) {
        Temp = Temp->NEXT;
    }

    if (Temp == nullptr) {
        cout << "Location is greater than the number of nodes + 1" << endl;
        delete New_Node;
        return START;
    }

    New_Node->NEXT = Temp->NEXT;
    Temp->NEXT = New_Node;

    return START;
}

// Function to display the linked list
void DisplayList(Node* START) {
    Node* current = START;
    while (current != nullptr) {
        cout << current->INFO << "->";
        current = current->NEXT;
    }
    cout <<"NULL"<< endl;
}
// Function to delete a node from a given location in the list
Node* DeleteFromLoc_List(Node* START, int Loc) {
    Node* Prev = START;
    Node* Temp = START;

    if (START == nullptr || Loc <= 0) {
        cout << "Empty Linked List or invalid location" << endl;
        return START;
    }

    if (Loc == 1) {
        START = START->NEXT;
        delete Temp;
        return START;
    }

    for (int i = 1; i <= Loc - 1 && Temp != nullptr; i++) {
        Prev = Temp;
        Temp = Temp->NEXT;
    }

    if (Temp == nullptr) {
        cout << "Location is greater than the total number of nodes" << endl;
        return START;
    }
    Prev->NEXT = Temp->NEXT;
    delete Temp;
    return START;
}





