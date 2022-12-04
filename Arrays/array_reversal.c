//-------------------------------------------Program for reversal of an array.
#include <stdio.h>
void reversal(int array[], int size)
{
    int temp;
    for (int i = 0; i < size / 2; i++)
    {
        temp = array[i];
        array[i] = array[size - 1 - i];
        array[size - 1 - i] = temp;
    }
    printf("\nAFTER REVERSAL\n");
    printf("\n THE ELEMENTS OF ARRAY\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d", array[i]);
    }
}
int main()
{
    int a[50];
    int size;
    int num, pos;
    printf("\nENTER THE SIZE OF ARRAY\n");
    scanf("%d", &size);
    if (size > 50)
    {
        printf("\nOVERFLOW\n");
    }
    else
    {
        printf("\nENTER THE ELEMENTS OF ARRAY\n");
        for (int i = 0; i < size; i++)
        {
            scanf("%d", &a[i]);
        }
    }
    reversal(a, size);
}