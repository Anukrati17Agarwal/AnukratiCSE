//--------------------------------------------------Program for Missing number in an array
#include <stdio.h>
void missing_num(int a[], int size)
{

    int flag = 1;
    for (int i = 0; i < size - 1; i++)
    {
        if (a[i + 1] != a[i] + 1)
        {
            flag = 0;
            printf("\nTHE MISSING ELEMENT IS %d", a[i] + 1);
            break;
        }
    }
    if (flag == 1)
    {
        printf("\nNO ELEMENT IS MISSING\n");
    }
}
int main()
{
    int i;
    int a[50];
    int size;
    // int pos;
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
    missing_num(a,size);
    }