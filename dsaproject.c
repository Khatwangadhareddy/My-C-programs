c
#include <stdio.h>
#include <stdlib.h>

// Function to swap two elements in the heap
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to heapify the node at index i
void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest);
    }
}

// Function to insert a new element into the heap
void insert(int arr[], int *n, int key) {
    if (*n == 0) {
        arr[0] = key;
        (*n)++;
    } else {
        arr[*n] = key;
        (*n)++;
        for (int i = *n / 2 - 1; i >= 0; i--)
            heapify(arr, *n, i);
    }
}

// Function to delete the root element from the heap
void delete_root(int arr[], int *n) {
    if (*n == 0)
        return;

    arr[0] = arr[*n - 1];
    (*n)--;
    heapify(arr, *n, 0);
}

// Function to print the contents of the heap
void print_heap(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[100];
    int n = 0;

    insert(arr, &n, 50);
    insert(arr, &n, 30);
    return 0;
}