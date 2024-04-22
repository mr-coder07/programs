#include<iostream>
using namespace std;

class node{public:
    int info;
    node* next;
    node(int data){
        info = data ;
        next = NULL;
    }
};

void printll(node * head){
    node * ptr = head;
    while(ptr!= NULL){
        cout<<ptr->info<<" ";
        ptr=ptr->next;
    }cout<<endl;
}

int main()
{
    node* head = new node(23);
    node* second = new node(879);
    node* third = new node(234);
    node* fourth = new node(5467);
    head->next=second;
    second->next=third;
    third->next=fourth;
    printll(head);

return 0;
}