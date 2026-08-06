#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];

    printf("Enter the data structure name: ");
    scanf("%s", str);

    if (strcmp(str, "Array") == 0)
        printf("Array is a Linear Data Structure");

    else if (strcmp(str, "Stack") == 0)
        printf("Stack is a Linear Data Structure");

    else if (strcmp(str, "Queue") == 0)
        printf("Queue is a Linear Data Structure");

    else if (strcmp(str, "LinkedList") == 0)
        printf("Linked List is a Linear Data Structure");

    else if (strcmp(str, "Tree") == 0)
        printf("Tree is a Non-Linear Data Structure");

    else if (strcmp(str, "Graph") == 0)
        printf("Graph is a Non-Linear Data Structure");

    else if (strcmp(str, "int") == 0 || strcmp(str, "char") == 0 ||
             strcmp(str, "float") == 0 || strcmp(str, "double") == 0)
        printf("It is a Primitive Data Type");

    else
        printf("Invalid Input");

    return 0;
}
