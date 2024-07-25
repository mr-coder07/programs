#include<iostream>
using namespace std;
class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int v)
    {
        this->data = v;
        this->left = this->right = NULL;
    }
};
void printInorder(Node* node)
{
    if (node != NULL)

    printInorder(node->left);

    cout << node->data << " ";

    printInorder(node->right);
};
void printPRE(Node* node)
{
    if (node != NULL)

     cout << node->data << " ";
    printPRE(node->left);

    printPRE(node->right);
};
void printPOST(Node* node)
{
    if (node != NULL)

    printPOST(node->left);
    printPOST(node->right);
     cout << node->data << " ";
};
int main()
{
    Node* root = new Node(100);
    root->left = new Node(20);
    root->right = new Node(200);
    root->left->left = new Node(10);
    root->left->right = new Node(30);
    root->right->left = new Node(150);
    root->right->right = new Node(300);
    cout << "Inorder Traversal: ";
    printInorder(root);
    return 0;
}
