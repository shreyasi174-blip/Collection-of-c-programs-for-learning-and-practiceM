#include <stdio.h>
#include <string.h>

int main()
{
    char ds[20];

    printf("Enter the data structure name: ");
    scanf("%s", ds);

    if (strcmp(ds, "Array") == 0)
        printf("Array is a Linear Data Structure");

    else if (strcmp(ds, "Stack") == 0)
        printf("Stack is a Linear Data Structure");

    else if (strcmp(ds, "Queue") == 0)
        printf("Queue is a Linear Data Structure");

    else if (strcmp(ds, "LinkedList") == 0)
        printf("Linked List is a Linear Data Structure");

    else if (strcmp(ds, "Tree") == 0)
        printf("Tree is a Non-Linear Data Structure");

    else if (strcmp(ds, "Graph") == 0)
        printf("Graph is a Non-Linear Data Structure");

    else if (strcmp(ds, "int") == 0 || strcmp(ds, "char") == 0 ||
             strcmp(ds, "float") == 0 || strcmp(ds, "double") == 0)
        printf("It is a Primitive Data Type");

    else
        printf("Invalid Input");

    return 0;
}
