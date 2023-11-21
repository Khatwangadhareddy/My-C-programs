#include <stdio.h>

// Define a new name for an existing datatype
typedef int NewNameForInt;

int main() {
    // Use the new name
    NewNameForInt x = 42;
    
    printf("Value of x: %d\n", x);

    return 0;
}
