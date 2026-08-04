#include<stdio.h>
int main() {
int rows,columns;
printf("Enter the number of columns: ");
scanf("%d", &columns);
printf("Enter the number of rows: ");
scanf("%d", &rows);
int arr[rows] [columns];
printf("Enter the elements of %d x %d array: ", rows, columns);
for(int i = 0; i < rows; i++) {
for(int j = 0;j < columns; j++) {
printf("\nElement[%d][%d]: ", i, j);
scanf("%d", &arr[i][j]);
}
}
printf("The 2d array is: ");
for(int i = 0 ;i < rows; i++) {
for(int j = 0; j < columns; j++) {
printf(" %d ",arr[i][j]);
}
}
return 0;
}
