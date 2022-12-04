//------------------------------------ Program for traversing array elements.

#include <stdio.h>
void traversal(int array[], int n)
{
    printf("\nTHE ARRAY AFTER TRAVERSAL\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
}
int main()
{
    int a[50];
    int size;
    printf("\nENTER THE SIZE OF ARRAY\n");
    scanf("%d", &size);
    printf("\nENTER THE ELEMENTS OF ARRAY\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    traversal(a, size);
}