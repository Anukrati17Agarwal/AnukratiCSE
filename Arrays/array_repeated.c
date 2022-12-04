//-------------------------Program to find which element is repeated in the array and which is not
#include <stdio.h>

int main()
{
    int DAT[10] = {0};
    int a[50];
    int size;
    int max = 0;

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
    max = a[0];
    for (int i = 0; i < size-1; i++)
    {
        if (a[i] < a[i + 1])
        {
            max = a[i + 1];
        }
    }
    // printf("%d ", max);
    for (int i = 0; i < size; i++)
    {
        DAT[a[i]]++;
    }
    // for (int i = 0; i < max+1; i++)
    // {
    //     printf("%d ",DAT[i]);
    // }
    for (int i = 0; i < max+1; i++)
    {
        if (DAT[i]>1)
        {
            printf("THE ELEMENT %d IS REPEATED %d times",i,DAT[i]);
            continue;
        }
        
    }
    
    
    
    
}