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

node * deletion(node* head,int index){
    node *p = head;
    int i=0;
    while (i!=index-1){
        p=p->next;
        i++;
    }
    node * q = p->next;
    p->next=q->next;
    delete q;
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

    traverse(head);

    //deletion of an element 
    deletion(head,2);

    cout<<endl;

    cout<<"after traverse : "<<endl;

    traverse(head);

    delete head, second , third , fourth;

return 0;
}