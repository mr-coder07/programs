#include<iostream>
using namespace std;

class node {
public:
    node* left;
    node* right;
    node * parent ;
    int data;

    node(node* l = NULL, node * p = NULL, node* r = NULL, int val = 0) :parent(p), left(l), right(r), data(val) {}
};

void insertfixup()