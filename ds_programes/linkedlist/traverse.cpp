#include<iostream>
using namespace std;

class node{public:
    int info;
    node* next;
};


void traverse(node * ptr){
    while(ptr != NULL){
        cout<<ptr->info<<" ";
        ptr = ptr->next;
    }
}


int main()
{
    node* head = new node;
    node* second = new node;
    node* third = new node;
    node* fourth = new node;

    head->info=5;
    head->next=second;

    second->info=4;
    second->next=third;

    third->info=76;
    third->next=fourth;

    fourth->info=56;
    fourth->next=NULL;
    
    traverse(head);

    return 0 ;
}