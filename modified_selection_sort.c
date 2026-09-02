#include<stdio.h>
void selection_sort(int array[], int size)
{
    int step, i;
    for(step=0; step<size-1; step++)
    {
        int min_idx = step;
        for(i=step+1; i<size; i++)
        {
            if(array[i] < array[min_idx])
            {
                min_idx = i;
            }
        }
        int temp = array[min_idx];
        array[min_idx] = array[step];
        array[step] = temp;

        for(i=0; i<size; i++)
        {
            printf("%d ", array[i]);
        }
        printf("\n");
    }

    for(step=size-1; step>0; step--)
    {
        int max_idx = step;

        for(i=size-1; i>step; i--)
        {
            if(array[i] > array[max_idx])
            {
                max_idx = i;
            }
        }

        int temp = array[max_idx];
        array[max_idx] = array[size-1];
        array[size-1] = temp;
    }

    for(i=0; i<size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main()
{
    int i;
    int data[] = {6,4,7,8,1,9,5};
    int size = sizeof(data)/sizeof(data[0]);

    selection_sort(data, size);

    printf("sorted array:");
    for(i=0; i<size; i++)
    {
        printf("%d ", data[i]);
    }

    return 0;
}
