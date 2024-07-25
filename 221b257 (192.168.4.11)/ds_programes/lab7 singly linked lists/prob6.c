#include<stdio.h>
#include<conio.h>

using namespace std;

struct node{
    int info;
    struct node* next;
};

struct node* findmiddle(struct node*head);

void traverse(struct node* head) {
    struct node* ptr = head;

    while (ptr != nullptr) {
        printf("%d\n", ptr->info);
        ptr = ptr->next;
    }
}
int main(){
    struct node*head = (struct node*)malloc(sizeof(struct node ));
    struct node*first = (struct node*)malloc(sizeof(struct node ));
    struct node*second = (struct node*)malloc(sizeof(struct node ));
    struct node*third = (struct node*)malloc(sizeof(struct node ));
    head->inf0=4;
    head->next=first;
    first->info=5;
    first->next=second;
    second->info=6;
    second->next=third;
    third->info=7;
    third->next=nullptr;
    traverse(head);
    return 0;
    }
node * findmiddle(node * head){
    int length=0;
    struct node * ptr = (struct node*)malloc(sizeof(struct node))
    ;
    while(ptr->next){
        length++;
    }
    int mid = length/2;
    struct node* nwptr=head;
    int i=0;
    while(i<mid){
        nwptr=nwptr->next;

    }
    printf("%d",nwptr->info);
}