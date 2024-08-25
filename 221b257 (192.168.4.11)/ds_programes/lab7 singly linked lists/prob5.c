#include<stdio.h>
#include<conio.h>

using namespace std;

struct node{
    int info;
    struct node* next;
};
void traverse(struct node* head) {
    struct node* ptr = head;

    while (ptr != nullptr) {
        printf("%d\n", ptr->info);
        ptr = ptr->next;
    }
}
struct  *elementsearch(struct node*head){
    int element;
    printf("enter element to be searched \n");
    scanf("%d",element);
    struct node*ptr=head;
    int count=0;
    while(ptr->next)
    {
        if(ptr->next==element){
        ptr=ptr->next;
        count++;
        }
    }
    if (count>0){
    printf("element found ")
    }
    else{
        printf("element not found ");
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
    elementsearch(head);
    return 0;
    }