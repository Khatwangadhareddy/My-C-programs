#include<stdio.h>
#include<stdlib.h>
struct node {
  int data;
  struct node *next;
};
struct node *createNode(int data) {
  struct node *new_node = (struct node*)malloc(sizeof(struct node));
  new_node->data = data;
  new_node->next = NULL;
  return new_node;
}
void printList(struct node *ptr) {
  while(ptr != NULL) {
    printf("%d ", ptr->data);
    ptr = ptr->next;
  }
  printf("\n");
}
int main() {
  struct node *head = createNode(1);
  head->next = createNode(5);
  head->next->next = createNode(8);
  printf("Elements of linked list is:");
  printList(head);
}