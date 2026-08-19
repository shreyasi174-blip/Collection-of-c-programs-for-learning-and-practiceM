#include <stdio.h>

int main() {
    int choice,W,I,J,LR,LC,n,N;
    long B,address;  

    printf("Press 1 for Row-Major Order\n");
    printf("Press 2 for Column-Major Order\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter Base Address (B): ");
    scanf("%ld", &B);

    printf("Enter Size of each element in bytes (W): ");
    scanf("%d", &W);

    printf("Enter Row index (I): ");
    scanf("%d", &I);

    printf("Enter Column index (J): ");
    scanf("%d", &J);

    printf("Enter Lower bound of Row (LR): ");
    scanf("%d", &LR);

    printf("Enter Lower bound of Column (LC): ");
    scanf("%d", &LC);

    printf("Enter Total number of Rows (n): ");
    scanf("%d", &n);

    printf("Enter Total number of Columns (N): ");
    scanf("%d", &N);

    switch (choice) {
        case 1: 
            address = B + W * ((I - LR) * N + (J - LC));
            printf("Address in Row-Major Order: %ld\n", address);
            break;

        case 2: 
            address = B + W * ((J - LC) * n+ (I - LR));
            printf("Address in Column-Major Order: %ld\n", address);
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}

