#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
void traverse(struct node *ptr) {
    while (ptr != NULL) {
        printf("Element: %d\n",ptr->data);
        ptr = ptr->next;
    }
}
int main() {
    struct node* head = (struct node*)malloc(sizeof(struct node));
    struct node* second = (struct node*)malloc(sizeof(struct node));
    struct node* third = (struct node*)malloc(sizeof(struct node));
    struct node* fourth = (struct node*)malloc(sizeof(struct node));
    head->data=1;
    head->next=second;
    second->data = 4;
    second->next = third;
    third->data = 8;
    third->next = fourth;
    fourth->data = 56;
    fourth->next = NULL;
    traverse(head);
}
