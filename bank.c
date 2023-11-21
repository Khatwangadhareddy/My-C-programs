#include <stdio.h>
int findHighestBalance(int balance[], int n)
{
    int highestBalance = balance[0];
    for (int i = 1; i < n; i++)
    {
        if (balance[i] > highestBalance)
        {
            highestBalance = balance[i];
        }
    }
    return highestBalance;
}
int main()
{
    // Define the array of bank account balances
    int balance[] = {1000, 2000, 3000, 4000, 5000};

    // Find the highest balance
    int highestBalance = findHighestBalance(balance, sizeof(balance) / sizeof(balance[0]));

    // Print the highest balance
    printf("The highest balance is %d\n", highestBalance);

    return 0;
}