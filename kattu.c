#include <stdio.h>

int main() {
    int a, b, res;
    char op;
    
    printf("Enter the Operator: ");
    scanf(" %c", &op); // Added a space before %c to skip whitespace characters
    
    printf("Enter the Numbers: ");
    scanf("%d %d", &a, &b); // Changed the format specifier to %d %d
    
    switch (op) {
        case '+':
            res = a + b;
            printf("%d %c %d = %d", a, op, b, res); // Added spaces for better formatting
            break;
        case '-':
            res = a - b;
            printf("%d %c %d = %d", a, op, b, res);
            break;
        case '*':
            res = a * b;
            printf("%d %c %d = %d", a, op, b, res);
            break;
        case '/':
            if (b != 0) { // Added a condition to check if the denominator is zero
                res = a / b;
                printf("%d %c %d = %d", a, op, b, res);
            } else {
                printf("Error: Division by zero");
            }
            break;
        default:
            printf("Invalid Operator");
            break;
    }
    
    return 0;
}
