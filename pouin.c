#include <stdio.h>

int main() {
    int number;
    printf("Enter the number:");
    scanf("%d",&number);  // Declare an integer variable
    int *ptr;        // Declare a pointer to an integer

    // Assign the address of 'number' to the pointer 'ptr'
    ptr = &number;

    // Display the address and value of the variable using the pointer
    printf("Address of 'number': %p\n", &number);
    printf("Value of 'number': %d\n", number);
    
    printf("Address of 'number' using pointer: %p\n", ptr);
    printf("Value of 'number' using pointer: %d\n", *ptr);

    return 0;
}
