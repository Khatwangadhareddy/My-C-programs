#include<stdio.h>
#include<stdlib.h>
struct node {
  int data;
  struct node *next;
};
void linkedlisttrav(struct node *ptr) {
  while (ptr != NULL){
    printf("%d ", ptr->data);
    ptr = ptr -> next;
  }
}
void insertatBeginning(struct node *head,int data) {
  struct node *newNode = malloc(sizeof(struct node));
  newNode->data=data;
  newNode->next=head;
  
}
int main() {
  struct node *head = malloc(sizeof(struct node));
  struct node *second = malloc(sizeof(struct node));
  struct node *third = malloc(sizeof(struct node));
  struct node *fourth = malloc(sizeof(struct node));
  head->data=10;
  head->next = second;
  second->data=20;
  second->next = third;
  third->data=30;
  third->next = fourth;
  fourth->data = 60;
  fourth->next = NULL;
  linkedlisttrav(head);
  insertatBeginning(head,67);
}