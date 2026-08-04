#include <stdio.h>
int main() {
    int rows, columns;
    printf("Enter rows: ");
    scanf("%d", &rows);
  
    printf("Enter columns: ");
    scanf("%d", &columns);

    int arr[rows][columns];

    printf("Enter the elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Traversing the 2D array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
