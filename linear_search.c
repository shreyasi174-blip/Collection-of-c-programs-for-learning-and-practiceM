#include <stdio.h>

int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {4, 7, 2, 9, 5};
    int n = 5;
    int key = 4;

    int result = linearSearch(arr, n, key);

    if (result == -1)
    {
        printf("Not found\n");
    }
    else
    {
        printf("Found at index %d\n", result);
    }

    return 0;
}
