#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node
struct Node {
    int data;
    struct Node* next;
};

// Function to display the list
void display(struct Node* head) {
    struct Node* temp = head->next;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
// Function to insert at the end of the list
void insertAtEnd(struct Node* head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to insert at the beginning of the list
void insertAtBeginning(struct Node* head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = head->next;
    head->next = newNode;
}

// Function to insert at a specific position
void insertAtPosition(struct Node* head, int data, int position) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    struct Node* temp = head;
    for (int i = 0; i < position - 1; i++) {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

// Function to delete a specific node
void deleteNode(struct Node* head, int data) {
    struct Node* temp = head;
    while (temp->next != NULL && temp->next->data != data) {
        temp = temp->next;
    }
    if (temp->next == NULL) {
        printf("Element not found\n");
        return;
    }
    struct Node* target = temp->next;
    temp->next = temp->next->next;
    free(target); 
}

// Function to delete the last node
void deleteLastNode(struct Node* head) {
    struct Node* temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
}

// Function to delete the first node
void deleteFirstNode(struct Node* head) {
    struct Node* temp = head->next;
    head->next = head->next->next;
    free(temp);
}
int main() {
    struct Node* head = malloc(sizeof(struct Node));
    head->next = NULL;

    // Insertion operations
    
    insertAtEnd(head, 7);
    insertAtBeginning(head, 2);
    insertAtBeginning(head,4);
    insertAtPosition(head, 10,3);

    // Display the list
    printf("Linked list elements: ");
    display(head);

    // Deletion operations
    deleteNode(head, 7);
    deleteLastNode(head);
    deleteFirstNode(head);

    // Display the list
    printf("Linked list elements after deletion: ");
    display(head);

    return 0;
}
