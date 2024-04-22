#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;
    node(int val, node* l = NULL, node* r = NULL) : data(val), left(l), right(r) {}
};

class tree {
public:

    node* createnode(int data, node* left = NULL, node* right = NULL) {
        return new node(data, left, right);
    }

    node* insertnode(node* root, int data) {
        if (root == NULL) {
            root = createnode(data);
        }
        else {
            if (data < root->data) {
                root->left = insertnode(root->left, data);
            }
            else {
                root->right = insertnode(root->right, data);
            }
        }
        return root;
    }

    void displayInOrder(node* root) {
        if (root != NULL) {
            displayInOrder(root->left);
            cout << root->data << " ";
            displayInOrder(root->right);
        }
    }

    void displayPreOrder(node* root) {
        if (root != NULL) {
            cout << root->data << " ";
            displayPreOrder(root->left);
            displayPreOrder(root->right);
        }
    }

    void displayPostOrder(node* root) {
        if (root != NULL) {
            displayPostOrder(root->left);
            displayPostOrder(root->right);
            cout << root->data << " ";
        }
    }
    node* searchNode(node* root, int key) {
        if (root == NULL || root->data == key) {
            return root;
        }

        if (key < root->data) {
            return searchNode(root->left, key);
        }

        return searchNode(root->right, key);
    }

    node* findMinValueNode(node* root) {
        node* current = root;

        while (current && current->left != NULL) {
            current = current->left;
        }

        return current;
    }

    node* deleteNode(node* root, int key) {
        if (root == NULL) {
            return root;
        }

        // If the key to be deleted is smaller than the root's key,
        // then it lies in the left subtree
        if (key < root->data) {
            root->left = deleteNode(root->left, key);
        }
        // If the key to be deleted is larger than the root's key,
        // then it lies in the right subtree
        else if (key > root->data) {
            root->right = deleteNode(root->right, key);
        }
        // If key is same as root's key, then this is the node to be deleted
        else {
            // Node with only one child or no child
            if (root->left == NULL) {
                node* temp = root->right;
                delete root;
                return temp;
            }
            else if (root->right == NULL) {
                node* temp = root->left;
                delete root;
                return temp;
            }

            // Node with two children
            // Get the inorder successor (smallest in the right subtree)
            node* temp = findMinValueNode(root->right);

            // Copy the inorder successor's data to this node
            root->data = temp->data;

            // Delete the inorder successor
            root->right = deleteNode(root->right, temp->data);
        }
        return root;
    }

};

int main() {
    tree t;
    node* root = t.createnode(87);
    t.insertnode(root, 64);
    t.insertnode(root, 3455);
    t.insertnode(root, 5);
    t.insertnode(root, 60);
    t.insertnode(root, 65);

    cout << "Root is: " << (root->data) << endl;

    cout << "Inorder Traversal of the tree: ";
    t.displayInOrder(root);
    cout << endl;

    cout << "Preorder Traversal of the tree: ";
    t.displayPreOrder(root);
    cout << endl;

    cout << "Postorder Traversal of the tree: ";
    t.displayPostOrder(root);
    cout << endl;

    int deleteKey = 60;
    root = t.deleteNode(root, deleteKey);
    cout << "Inorder Traversal after deleting node with key " << deleteKey << ": ";
    t.displayInOrder(root);
    cout << endl;

    return 0;
}
