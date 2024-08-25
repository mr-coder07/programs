#include <stdlib.h>
#include <stdio.h>

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

