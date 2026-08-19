#include <stdio.h>
int main()
{
    int arr[100], n, i, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:");
    for(i = 0; i < n; i++)
    
        scanf("%d", &arr[i]);
    

    printf("Enter position to access: ");
    scanf("%d", &pos);
    printf("Element= %d\n",*(arr+pos));
    printf("found at index=%d",pos);
    return 0;
}
