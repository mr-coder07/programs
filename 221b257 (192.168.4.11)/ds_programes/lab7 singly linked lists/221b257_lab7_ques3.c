#include<stdio.h>
#include<conio.h>

using namespace std;

struct node{
    int info;
    struct node* next;
};

struct node* deletenode(struct node*head){
    printf("1. delete from beggining");
    printf("2. delete from index ");
    printf("3. delete from end");
    printf("4. exit");
    int choice; scanf("%d",choice);

    switch(choice){
case 1:
    struct node*ptr = head;
    head= head->next;
    free(ptr);
    return head;
case 2:
    int index;int i=0;
    scanf("%d",index);
    struct node* ptr = head;
    while(i<index-1){
        ptr=ptr->next;

    }
    struct node* precder = ptr->next;
    ptr->next=precder->next;
    free(precder);
    return head;
case 3:
    struct node*ptr = head;
    struct node* preceder = ptr->next;
    while(precder->next!=nullptr){
        preceder=precder->next;
        ptr=ptr->next;
    }
    ptr->next=nullptr;
    free(precder);
    return head;
case 4:
    break;
    }
}
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
    deletenode(head);
    traverse(head);

    return 0;
    }
