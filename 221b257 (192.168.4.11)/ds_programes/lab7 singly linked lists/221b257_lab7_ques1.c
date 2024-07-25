#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node* next;
};

void traverse(struct node* head) {
    struct node* ptr = head;

    while (ptr != NULL) {
        printf("%d\n", ptr->info);
        ptr = ptr->next;
    }
}

struct node* insertAtBeginning(struct node* head, int val) {
    struct node* nwnode = (struct node*)malloc(sizeof(struct node));
    nwnode->info = val;
    nwnode->next = head;
    return nwnode;
}

int main() {
    struct node* head = (struct node*)malloc(sizeof(struct node));

    head->info = 1;
    head->next = NULL;

    traverse(head);
    head = insertAtBeginning(head, 2);
    printf("after insertion the new node:\n");
    traverse(head);

    free(head);

    return 0;
}

