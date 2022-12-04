//-----------------------------Program to insert the given elements into an array.
#include <stdio.h>
void Insertion(int array[], int size, int pos, int num)
{
    for (int i = size - 1; i >= pos - 1; i--)
    {
        array[i + 1] = array[i];
    }
    array[pos - 1] = num;
    size++;

    printf("\nTHE ARRAY AFTER INSERTION\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
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
    printf("\nENTER THE NUMBER TO BE INSERTED\n");
    scanf("%d", &num);
    printf("\nENTER THE POSITION AT WHICH THE NUMBER IS TO BE INSERTED\n");
    scanf("%d", &pos);
    if (pos <= 0 || pos > size)
    {
        printf("\nINVALID POSITION\n");
    }
    else
    {
        Insertion(a, size, pos, num);
    }
}