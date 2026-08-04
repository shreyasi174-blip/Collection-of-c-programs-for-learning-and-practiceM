#include <stdio.h>

int factorialRec(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorialRec(n - 1);
}

int factorialIter(int n)
{
    int i, fact = 1;
    for (i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main()
{
    int n, choice;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\n1. Iteration\n2. Recursion\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
        printf("Factorial = %d\n", factorialIter(n));
    else if (choice == 2)
        printf("Factorial = %d\n", factorialRec(n));
    else
        printf("Invalid choice!");

    return 0;
}
