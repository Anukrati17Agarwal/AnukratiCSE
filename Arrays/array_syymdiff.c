//---------------------------Program for Set Symmetric Difference

#include <stdio.h>
void Symmetric_Difference_array(int Array1[], int m, int Array2[], int n)
{
    int c[100];
    int i = 0, j = 0, k = 0;
    while (i < m && j < n)
    {
        if (Array1[i] < Array2[j])
        {
            c[k] = Array1[i];
            i++;
            k++;
        }
        else if (Array2[j] < Array1[i])
        {
            c[k] = Array2[j];
            j++;
            k++;
        }
        else
        {
            c[k] = Array1[i];
            i++;
            j++;
        }
    }

    while (i < m)
    {
        c[k] = Array1[i];
        i++;
        k++;
    }

    while (j < n)
    {
        c[k] = Array2[j];
        j++;
        k++;
    }

    for (i = 0; i < k; i++)

    {
        if (c[i] != c[i + 1])
        {
            printf(" %d ", c[i]);
        }
    }
}
int main()
{
    int a[50];
    int b[50];

    int arr1_size, arr_2size;
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

    printf("\nTHE UNION OF ARRAYS IS AS FOLLOWS:\n");
    Symmetric_Difference_array(a, arr1_size, b, arr_2size);
}