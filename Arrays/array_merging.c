//--------------------------------Program for merging two sorted arrays
#include<stdio.h>
void Merging_array(int Array1[], int m , int Array2[],int n)
{
    int c[100];
    int i=0,j=0,k=0;
    while (i<m&&j<n)
    {
        if (Array1[i]<Array2[j])
        {
            c[k]=Array1[i];
            i++;
            k++;
        }
        else
        {
            c[k]=Array2[j];
            j++;
            k++;
        }
        
    }

    while (i<m)
    {
        c[k]=Array1[i];
        i++;
        k++;
        
    }
    
        while (j<n)
    {
        c[k]=Array2[j];
        j++;
        k++;
        
    }

    for ( k = 0; k < m+n; k++)
    {
        printf("%d ",c[k]);
    }
    
    

}
int main()
{
    int a[50];
    int b[50];
    
    int arr1_size,arr_2size;
    printf("\nENTER THE SIZE OF ARRAY 1\n");
    scanf("%d", &arr1_size);
    if (arr1_size > 50)
    {
        printf("\nOVERFLOW\n");
    }
    else
    {
        printf("\nENTER THE ELEMENTS OF ARRAY\n");
        for (int i = 0; i < arr1_size; i++)
        {
            scanf("%d", &a[i]);
        }
    }
        printf("\nENTER THE SIZE OF ARRAY 2\n");
    scanf("%d", &arr_2size);
    if (arr_2size > 50)
    {
        printf("\nOVERFLOW\n");
    }
    else
    {
        printf("\nENTER THE ELEMENTS OF ARRAY\n");
        for (int i = 0; i < arr_2size; i++)
        {
            scanf("%d", &b[i]);
        }
    }

    printf("\nTHE MERGED ARRAY IS AS FOLLOWS:\n");
    Merging_array(a,arr1_size,b,arr_2size);

}