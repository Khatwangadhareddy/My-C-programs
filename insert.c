#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int array[MAX_SIZE];
    int n, position, element, i;
    printf("Enter the size of the array (max %d): ", MAX_SIZE);
    scanf("%d", &n);

    // Check if the n is within the valid range
    if (n <= 0 || n > MAX_SIZE) {
        printf("Invalid n entered.\n");
        return 0;
    }

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("Enter the position to insert the element (1 to %d): ", n + 1);
    scanf("%d", &position);

    // Check if the position is within the valid range
    if (position < 1 || position > n + 1) {
        printf("Invalid position entered.\n");
        return 0;
    }

    printf("Enter the element to be inserted: ");
    scanf("%d", &element);

    // Shift the elements to the right from position to the end of the array
    for (i = n; i >= position; i--) {
        array[i] = array[i - 1];
    }

    // Insert the element at the specified position
    array[position - 1] = element;

    n++; // Increase the n of the array

    printf("Array after inserting the element:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
