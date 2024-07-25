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

node *insertatbeg(node*head, int data){
    node* nwhead = new node;
     nwhead->info = data;
     nwhead->next=head;
     return nwhead;


}

node* insertinbtwn(node*head , int info , int index ){
    node * nwnode= new node;
    node * p= head;

    int i=0;
    while (i!=index-1){
        p=p->next;
        i++;
    }

    nwnode->info=info;
    nwnode->next=p->next;
    p->next=nwnode;
    return head;
}

node* insertatend(node * head , int data ){
    node * nwnode= new node;
    node * p= head;
    while(p->next!=NULL){
        p=p->next;
    }

    nwnode->info=data;
    nwnode->next=NULL;
    p->next=nwnode;
    return head;
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

    cout<<"after insertion at head"<<endl;
    
    head = insertatbeg(head, 999);

    traverse(head);
    cout<<endl;

    cout<<"after insertion at mid "<<endl;

    insertinbtwn( head , 33 , 3);

    traverse(head);
    cout<<endl;

    cout<<"after insertion at end "<<endl;

    insertatend(head, 11 );

    traverse(head);
    cout<<endl;

    return 0 ;
}