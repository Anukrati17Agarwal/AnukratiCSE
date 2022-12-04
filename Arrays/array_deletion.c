//---------------------------------------Program for delete the given elements into an array.

#include<stdio.h>
void deletion(int array[],int size,int pos)
{
    for (int i = pos-1; i < size; i++)
    {
        array[i]=array[i+1];
    }
    size--;
    printf("\nTHE ARRAY AFTER DELETION OF ELEMENT IS\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",array[i]);
    }
    
    

}
int main()
{
    int a[50];
    int size;
    int pos;
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
    printf("\nENTER THE POSITION FROM WHICH THE NUMBER IS TO BE DELETED\n");
    scanf("%d", &pos);
    if (pos <= 0 || pos > size)
    {
        printf("\nINVALID POSITION\n");
    }
    else
    {
       deletion(a,size,pos);
    }

}