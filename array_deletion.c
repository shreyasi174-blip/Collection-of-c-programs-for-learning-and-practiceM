#include <stdio.h>

int deleteElement(int arr[], int n, int pos)
{
    for (int i = pos; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    n--;

    return n;
}

int main()
{
    int arr[6] = {10, 20, 30, 40, 50};
    int n = 5;
    int pos = 2;

    n = deleteElement(arr, n, pos);

    printf("Array after deletion: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
