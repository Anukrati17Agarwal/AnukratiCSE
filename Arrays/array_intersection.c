//---------------------------------------Program for Set intersection

#include <stdio.h>
void Intersection_array(int Array1[], int m, int Array2[], int n)
{
    int c[100];
    int i = 0, j = 0, k = 0;
    while (i < m && j < n)
    {
        if (Array1[i] < Array2[j])
        {
            i++;
        }
        else if (Array2[j] < Array1[i])
        {
            j++;
        }
        else
        {
            c[k] = Array1[i];
            i++;
            j++;
            k++;
        }
    }

    for (i = 0; i < k; i++)

    {
        printf("%d ", c[i]);
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

    printf("\nTHE INTERSECTION OF ARRAYS IS AS FOLLOWS:\n");
    Intersection_array(a, arr1_size, b, arr_2size);
}