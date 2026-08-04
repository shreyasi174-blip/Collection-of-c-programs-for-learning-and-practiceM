#include <stdio.h>
int main() {
    int arr1[5];
    int arr2[2][3];
    int index, row, column;
    printf("Enter 5 elements for 1D array:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter 6 elements for 2D array:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("Enter index for 1D array: ");
    scanf("%d", &index);
    printf("1D Array Element = %d\n", arr1[index]);

    printf("Enter row and column for 2D array: ");
    scanf("%d %d", &row, &column);
    printf("2D Array Element = %d\n", arr2[row][column]);

    return 0;
}
