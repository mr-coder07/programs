#include<iostream>
using namespace std;

class node {
public:
    node* left;
    node* right;
    int data;

    node(node* l = NULL, node* r = NULL, int val = 0) : left(l), right(r), data(val) {}
};

class bst {
public:
    node* root;

    node* createnode(int data) {
        return new node(NULL, NULL, data);
    }

    bst() {
        root = NULL;
    }

    node* insertnode(node* root, int data) {
        if (root == NULL) {
            return createnode(data);
        }
        else if (data < root->data) {
            root->left = insertnode(root->left, data);
        }
        else if (data > root->data) {
            root->right = insertnode(root->right, data);
        }
        return root;
    }

    void inordertraverse(node* root) {
        if (root != NULL) {
            inordertraverse(root->left);
            cout << root->data << " ";
            inordertraverse(root->right); 
        }
    }

    node* inordersuccesor(node* root) {
        if (root == NULL || root->right == NULL) {
            return NULL;
        }
        else {
            node* temp = root->right; 
            while (temp->left != NULL) {
                temp = temp->left;
            }
            return temp;
        }
    }

    node* delnode(node* root, int val) {
        if (root == NULL) {
            cout << "empty tree" << endl;
            return NULL;
        }
        else if (val < root->data) {
            root->left = delnode(root->left, val);
        }
        else if (val > root->data) {
            root->right = delnode(root->right, val);
        }
        else {
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
            else {
                node* temp = inordersuccesor(root);
                root->data = temp->data;
                root->right = delnode(root->right, temp->data);
            }
        }
        return root;
    }
};

int main() {
    bst tree;
    tree.root = tree.insertnode(tree.root, 5);
    tree.root = tree.insertnode(tree.root, 3);
    tree.root = tree.insertnode(tree.root, 7);
    tree.root = tree.insertnode(tree.root, 1);
    tree.root = tree.insertnode(tree.root, 4);

    cout << "Inorder traversal: ";
    tree.inordertraverse(tree.root);
    cout << endl;

    int searchValue = 4;
    tree.root = tree.delnode(tree.root, searchValue);

    cout << "Inorder traversal after deleting " << searchValue << ": ";
    tree.inordertraverse(tree.root);
    cout << endl;

    return 0;
}
