#include<iostream>
using namespace std;

class node{public:
    int data ;
    node* left;
    node* right;
    node(int data,node*l=NULL, node * r=NULL):data(data),left(l),right(r){}
};

class binarytree{public:
    node * createnode(int data,node*l=NULL, node * r=NULL){
        return new node(data,l, r);
    }
    node* insertelement(node * root ,int data){
        if (root == NULL){
            root=createnode(data);
        }
        else if(data < root->data){
            root->left=insertelement(root->left,data);    
        }
        else{
            root->right=insertelement(root->right,data);
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
    node * searchnode(node* root, int data){
        if(root != NULL || root->data==data){
            return root;
        }else if(data<root->data){
            return searchnode(root->left,data);
        }return searchnode(root->right,data);
    }
    node* inordersuccessor(node* root) {
    if (root->right != NULL) {
        node* temp = root->right;
        while (temp->left != NULL) {
            temp = temp->left;
        }
        return temp;
    }return NULL;
    }
    
    node* inforderpredecissor(node* root){
        if (root->left != NULL){
            node *temp = root->left;
            while(temp->right != NULL){
                temp=temp->right;
            }
            return temp;
        }return NULL;
    }
    
    node * deletenode(node*& root, int data) {
        if (root == NULL) {
            return NULL;
        }
        else if (data < root->data) {
            deletenode(root->left, data);
        }
        else if (data > root->data) {
            deletenode(root->right, data);
        }
        else {
            // Case 1: Node with only one child or no child
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
            // Case 2: Node with two children
            else {
                node* temp = inordersuccessor(root);
                root->data = temp->data;
                deletenode(root->right, temp->data);
            }
        }
    }
    

};
int main(){
    node * root=NULL;
    binarytree t;
    root = t.insertelement(root,3);
    root = t.insertelement(root,1);
    root = t.insertelement(root,5);
    root = t.insertelement(root,7);
    root = t.insertelement(root,9);
    root = t.insertelement(root,6);
    t.displayInOrder(root);
    
    return 0;

}