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

node * delfrombeg(node * head){
    node* ptr = head;
    head = head->next;
    delete ptr;
    return head;
}

node *delfromend(node * head ){
    if(head == NULL){
        cout<<"empty linked list"<<endl;
        return head;
    }
    node * ptr = head;
    node * ptr2 = ptr->next;
    while(ptr2->next != NULL){
        ptr2=ptr2->next;
        ptr=ptr->next;
    }
    ptr->next=NULL;
    delete ptr2;
    return head;
}

node * deletion(node* head,int index){//deletion from an given index

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
    cout<<endl;

    // Deletion of an element at index
    head = deletion(head, 2);  // Update the head after deleting an element.
    cout << "after traverse: " << endl;
    traverse(head);
    cout << endl;

    // Deletion of an element at beginning
    cout << "deletion at beginning " << endl;
    head = delfrombeg(head);  // Update the head after deleting an element.
    traverse(head);
    cout << endl;

    // Deletion of an element at ending
    cout << "deletion at ending " << endl;
    head = delfromend(head);  // Update the head after deleting an element.
    traverse(head);
    cout << endl;

    return 0;
}
