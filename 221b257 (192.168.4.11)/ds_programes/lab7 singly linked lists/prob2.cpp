#include <iostream>
using namespace std;

class node {
public:
    int info;
    node* next;
};

void traverse(node*head){
    node *ptr= head;

while(ptr!=nullptr){
        cout<<ptr->info<<endl;
        ptr=ptr->next;

}}

