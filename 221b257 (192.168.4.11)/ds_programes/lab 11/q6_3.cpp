#include<iostream>
#include<queue>
using namespace std;
struct Node {
    int data;
    Node *left, *right;
    Node(int data)
    {
       left = right = NULL;
       this->data = data;
    }
};
void printInternalNodes(Node* root)
{
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        Node* curr = q.front();
        q.pop();
        bool isInternal = 0;
        if (curr->left) {
            isInternal = 1;
            q.push(curr->left);
        }
        if (curr->right) {
            isInternal = 1;
            q.push(curr->right);
        }
        if (isInternal)
            cout << curr->data << " ";
    }
};
int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    root->right->right->right = new Node(10);
    root->right->right->left = new Node(7);
    root->right->left->left = new Node(8);
    root->right->left->right = new Node(9);
    printInternalNodes(root);
    return 0;
}
