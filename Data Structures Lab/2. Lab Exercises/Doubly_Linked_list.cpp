

using namespace std;

// Define a structure for a Node
struct Node {
    int INFO;
    Node* NEXT;
    Node* PREV;
};

// Function to allocate memory for a new node
Node* AllocateNode(int info) {
    Node* newNode = new Node;
    newNode->INFO = info;
    newNode->NEXT = nullptr;
    newNode->PREV = nullptr;
    return newNode;
}
void InsertAt_Loc_DList(Node** START, Node** END, int info, int Loc);
void DeleteFromLoc_DList(Node** START, Node** END, int Loc);
void DisplayDList(Node* START);

int main() {
    Node* START = nullptr; // Initialize an empty list
    Node* END = nullptr;
    int choice, loc, info;

    do {
        cout << "\nMenu:\n";
        cout << "1. Insert at a specified location\n";
        cout << "2. Delete from a specified location\n";
        cout << "3. Display the doubly linked list\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the value to insert: ";
                cin >> info;
                cout << "Enter the location to insert: ";
                cin >> loc;
                InsertAt_Loc_DList(&START, &END, info, loc);
                break;

            case 2:
                cout << "Enter the location to delete: ";
                cin >> loc;
                DeleteFromLoc_DList(&START, &END, loc);
                break;

            case 3:
                cout << "Doubly Linked List: ";
                DisplayDList(START);
                break;

            case 4:
                cout << "Exiting the program.\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }

    } while (choice != 4);

    // Clean up and free memory
    Node* current = START;
    while (current != nullptr) {
        Node* temp = current;
        current = current->NEXT;
        delete temp;
    }

    return 0;
}
void InsertAt_Loc_DList(Node** START, Node** END, int info, int Loc) {
    Node* Temp = *START;
    Node* New_node;

    if (Loc < 1) {
        cout << "Invalid location" << endl;
        return;
    }

    New_node = AllocateNode(info);

    if (Loc == 1) {
        New_node->NEXT = *START;
        New_node->PREV = nullptr;

        if (*START == nullptr) {
            *END = New_node;
        } else {
            (*START)->PREV = New_node;
        }

        *START = New_node;
        return;
    }

    for (int i = 1; i < Loc - 1 && Temp != nullptr; i++) {
        Temp = Temp->NEXT;
    }

    if (Temp == nullptr) {
        cout << "Location is greater than the number of nodes + 1" << endl;
        delete New_node;
        return;
    }

    New_node->NEXT = Temp->NEXT;
    New_node->PREV = Temp;

    if (Temp->NEXT == nullptr) {
        *END = New_node;
    } else {
        (Temp->NEXT)->PREV = New_node;
    }

    Temp->NEXT = New_node;
}
// Function to display the doubly linked list from START to END
void DisplayDList(Node* START) {
    Node* current = START;
    while (current != nullptr) {
        cout << current->INFO << "->";
        current = current->NEXT;
    }
    cout <<"NULL"<<endl;
}
// Function to delete a node from a given location in the doubly linked list
void DeleteFromLoc_DList(Node** START, Node** END, int Loc) {
    Node* Temp = *START;
    Node* Prev = *START;

    if (*START == nullptr || Loc <= 0) {
        cout << "Empty Linked List or invalid location" << endl;
        return;
    }

    if (Loc == 1) {
        if (*START == *END) {
            *START = *END = nullptr;
        } else {
            ((*START)->NEXT)->PREV = nullptr;
            *START = (*START)->NEXT;
        }
        delete Temp;
        return;
    }

    for (int i = 1; i <= Loc - 1 && Temp != nullptr; i++) {
        Prev = Temp;
        Temp = Temp->NEXT;
    }

    if (Temp == nullptr) {
        cout << "Location is greater than the number of nodes + 1" << endl;
        return;
    }

    Prev->NEXT = Temp->NEXT;

    if (Temp->NEXT == nullptr) {
        *END = Prev;
    } else {
        (Temp->NEXT)->PREV = Prev;
    }

    delete Temp;
}

