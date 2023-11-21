#include <stdio.h>
#include <stdlib.h>

// Node structure for the circular singly linked list
struct Node {
    int data;
    struct Node *next;
};

// Function to display all elements of the circular linked list
void displayList(struct Node *head) {
    if (head == NULL) {
        return;
    }
    struct Node *current = head;
    do {
        printf("%d -> ", current->data);
        current = current->next;
    } while (current != head);
    printf("HEAD\n");
}

// Function to insert an element at a specific position in the circular linked list
void insertAtPosition(struct Node **head, int data, int position) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    if (*head == NULL) {
        *head = newNode;
        newNode->next = *head;
    } else {
        struct Node *current = *head;
        for (int i = 0; i < position - 1; i++) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
}

// Function to delete a specific node in the circular linked list
void deleteNode(struct Node **head, int data) {
    if (*head == NULL) {
        return;
    }
    struct Node *current = *head;
    struct Node *temp = NULL;
    if ((*head)->data == data) {
        while (current->next != *head) {
            current = current->next;
        }
        if (current == *head) {
            *head = NULL;
        } else {
            current->next = (*head)->next;
            *head = current->next;
        }
        free(current);
    } else {
        while (current->next != *head && current->next->data != data) {
            current = current->next;
        }
        if (current->next != *head) {
            temp = current->next;
            current->next = temp->next;
            free(temp);
        }
    }
}

int main() {
    // Initializing the circular linked list
    struct Node *head = NULL;

    // Inserting elements into the circular linked list
    insertAtPosition(&head, 5, 0);
    insertAtPosition(&head, 7, 1);
    insertAtPosition(&head, 9, 2);
    insertAtPosition(&head, 11, 3);

    printf("Circular linked list after insertion: ");
    displayList(head);

    // Deleting a specific node from the circular linked list
    deleteNode(&head, 7);
    printf("Circular linked list after deletion: ");
    displayList(head);

    // Freeing allocated memory
    struct Node *current = head;
    struct Node *temp = NULL;
    if (current != NULL) {
        temp = current->next;
        while (temp != head) {
            current->next = temp->next;
            free(temp);
            temp = current->next;
        }
        free(head);
    }

    return 0;
}